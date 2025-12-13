#!/bin/bash

ECHO_RED="\033[31m"
ECHO_GREEN="\033[32m"
ECHO_YELLOW="\033[33m"
ECHO_NONE="\033[0m"

NPC_HOME=$(pwd)
CPU_TEST_HOME=${NPC_HOME}/../am-kernels/tests/cpu-tests
AM_TEST_HOME=${NPC_HOME}/../am-kernels/tests/am-tests
MICROBENCH_HOME=${NPC_HOME}/../am-kernels/benchmarks/microbench
RISCV_TEST_HOME=${NPC_HOME}/../am-kernels/tests/riscv-tests-am-master

CPU_TIMEOUT_SEC=120
PASS_CNT=0
FAIL_CNT=0

NVBOARD_ENABLE=0
DCACHE_ENABLE=0

test_catcher() {
    while IFS= read -r line; do
        if [[ -z "${CURRENT_TEST}" && $line =~ ${TEST_NAME_PATTERN} ]]; then
            CURRENT_TEST="${BASH_REMATCH[1]}"
            printf "TEST: [%'-15s] " "${CURRENT_TEST}"
        fi
        if [[ $line =~ ${TRAP_PATTERN} ]]; then
            TRAP_TYPE="${BASH_REMATCH[1]}"
            if [ "${TRAP_TYPE}" = "GOOD" ]; then
                echo -e "${ECHO_GREEN} PASS ${ECHO_NONE}"
                ((PASS_CNT++))
            else
                echo -e "${ECHO_RED} **FAIL** ${ECHO_NONE}"
                ((FAIL_CNT++))
            fi
            CURRENT_TEST="" # 重置当前测试名，支持多测试程序连续运行
        fi
    done
}

test_info() {
    echo -e "\n${ECHO_YELLOW}Running $1 (only show the result)...${ECHO_NONE}"
    echo -e "${ECHO_YELLOW}Timeout: ${CPU_TIMEOUT_SEC}s (no output will interrupt test)${ECHO_NONE}" #TIMEOUT退出机制TODO
    echo -e "${ECHO_YELLOW}--------------------------------------------------${ECHO_NONE}"
}

if [ $# -eq 0 ]; then
    echo -e "${ECHO_RED}❌ Warning! No parameters set. Enter 'help' for help${ECHO_NONE}"
    exit 1
fi

#检查架构（后续加入单周期，nemu等）
# 解析 arch 与参数（支持任意参数）
ARCH="$1"
EXTRA_ARGS=()
case "$ARCH" in
    riscv32e-ysyxsoc)
        echo -e "Running Arch ${ECHO_GREEN}[$ARCH]${ECHO_NONE} For test ..."
        shift 1 # 移除第一个参数 arch

        # 解析剩余参数：支持 nvboard / nvboard=val, dcache / dcache=val，以及任意其它参数并保留
        for arg in "$@"; do
            case "$arg" in
                nvboard)
                    EXTRA_ARGS+=("nvboard=1")
                    ;;
                nvboard=*)
                    EXTRA_ARGS+=("$arg")
                    ;;
                dcache)
                    EXTRA_ARGS+=("dcache=1")
                    ;;
                dcache=*)
                    EXTRA_ARGS+=("$arg")
                    ;;
                *)
                    # 其他任意用户参数，直接保留
                    EXTRA_ARGS+=("$arg")
                    ;;
            esac
        done

        echo -e "Extra args: ${EXTRA_ARGS[*]}"
        ;;
    riscv32e-npc)
        # 也支持任意参数传递给 make
        echo -e "Running Arch ${ECHO_GREEN}[$ARCH]${ECHO_NONE} For test ..."
        shift 1
        for arg in "$@"; do
            EXTRA_ARGS+=("$arg")
        done
        echo -e "Extra args: ${EXTRA_ARGS[*]}"
        ;;
    help)
        echo -e "\n============== AUTO TEST RUN =============="
        echo -e "It can be tested automatically with one click, and then"
        echo -e "collect relevant error information to improve the testing efficiency."
        echo -e "If you need detailed logs, please check the log file in the logs directory."
        echo -e "\n\nFor example, enter './run_test.sh riscv32e-ysyxsoc nvboard=1 dcache=1'(function nvboard and dcache only for ysyxsoc). "
        echo -e "This means enabling the 'nvboard' and 'dcache' args on arch 'riscv32e-ysyxsoc'"
        echo -e "===========================================\n"
        exit 1
        ;;
    *)
        echo -e "Currently do not supported ARCH: ${ECHO_RED}[$ARCH]${ECHO_NONE} "
        echo "Supported ARCH: riscv32e-npc, riscv32e-ysyxsoc ..."
        exit 1
        ;;
esac

# 构建最终传给 make 的 ARGS（不再自动提供任何默认参数）
ARGS=""
if [ ${#EXTRA_ARGS[@]} -gt 0 ]; then
    # 把数组连接成一个空格分隔的字符串
    ARGS="$(printf "%s " "${EXTRA_ARGS[@]}")"
    ARGS="${ARGS%% }" # 去掉末尾空格
fi
TEST_NAME_PATTERN="^# Building ([a-zA-Z0-9_-]+)-run "
TRAP_PATTERN="HIT (GOOD|BAD) TRAP"

# 日志设置：每次运行前清空，若不存在则创建目录/文件
LOG_DIR="${NPC_HOME}/logs"
LOG_FILE="${LOG_DIR}/${ARCH}_run_test.log"
mkdir -p "$LOG_DIR"
: > "$LOG_FILE"                              # 清空日志文件（不存在则创建）
echo "===== run_test.sh start: $(date '+%F %T') =====" >> "$LOG_FILE"

#进入cpu-test运行
cd ${CPU_TEST_HOME} || {
            echo -e "${ECHO_RED}❌ Failed to switch directories CPU_TEST_HOME! The directory does not exist: ${CPU_TEST_HOME}${ECHO_NONE}"
            exit 1
        }
test_info "CPU-TEST"
# make ARCH=${ARCH} -C ${CPU_TEST_HOME} run  ${ARGS}2>&1 | \
# 把 make 的完整输出（stdout+stderr）追加到日志，并把输出传给 test_catcher 解析
make ARCH=${ARCH} -C ${CPU_TEST_HOME} run ${ARGS} 2>&1 | tee -a "$LOG_FILE" | \
test_catcher

echo -e "${ECHO_YELLOW}--------------------------------------------------${ECHO_NONE}"
if [ ${FAIL_CNT} -eq 0 ]; then
    echo "All the cpu-test pass successfully!"
else
    echo -e "Arch: ${ARCH}"
    echo -e "Args: ${ARGS}"
    echo -e "Pass: ${ECHO_GREEN}${PASS_CNT}${ECHO_NONE}"
    echo -e "Fail: ${ECHO_RED}${FAIL_CNT}${ECHO_NONE}. Check your code!"
    exit 1
fi

#进入riscv-test运行
# cd ${RISCV_TEST_HOME} || {
#             echo -e "${ECHO_RED}❌ Failed to switch directories RISCV_TEST_HOME! The directory does not exist: ${RISCV_TEST_HOME}${ECHO_NONE}"
#             echo -e "Try to clone riscv-tests-am-master into am-kernels/tests/"
#             cd ${NPC_HOME}/am-kernels/tests/
#             git clone https://github.com/NJU-ProjectN/riscv-tests-am
#             cd ${RISCV_TEST_HOME} || exit 1
#         }
# test_info "RISCV-TEST"
# make ARCH=${ARCH} -C ${RISCV_TEST_HOME} run  ${ARGS}2>&1 | \
# test_catcher

# echo -e "${ECHO_YELLOW}--------------------------------------------------${ECHO_NONE}"
# if [ ${FAIL_CNT} -eq 0 ]; then
#     echo "All the riscv-test pass successfully!"
# else
#     echo -e "Arch: ${ARCH}"
#     echo -e "Args: ${ARGS}"
#     echo -e "Pass: ${ECHO_GREEN}${PASS_CNT}${ECHO_NONE}"
#     echo -e "Fail: ${ECHO_RED}${FAIL_CNT}${ECHO_NONE}"
# fi

# 如果不存在则询问是否克隆（支持非交互模式通过环境变量控制）
SKIP_RISCV_TEST=0

if [ -d "${RISCV_TEST_HOME}" ]; then
    cd "${RISCV_TEST_HOME}" || {
        echo -e "${ECHO_RED}❌ Failed to switch directories RISCV_TEST_HOME! The directory exists but cd failed: ${RISCV_TEST_HOME}${ECHO_NONE}"
        SKIP_RISCV_TEST=1
    }
else
    echo -e "${ECHO_YELLOW}RISCV_TEST_HOME not found: ${RISCV_TEST_HOME}${ECHO_NONE}"
    # 非交互：如果设置了 AUTO_CLONE_RISCV=1 则自动克隆；如果设置了 AUTO_SKIP_RISCV_TEST=1 则自动跳过
    if [ "${AUTO_CLONE_RISCV}" = "1" ]; then
        DO_CLONE=yes
    elif [ "${AUTO_SKIP_RISCV_TEST}" = "1" ]; then
        DO_CLONE=no
    else
        read -p "Do you want to clone riscv-tests-am-master into am-kernels/tests/? [y/N]: " answer
        case "${answer}" in
            y|Y) DO_CLONE=yes ;;
            *)   DO_CLONE=no ;;
        esac
    fi

    if [ "${DO_CLONE}" = "yes" ]; then
        echo -e "${ECHO_YELLOW}Cloning riscv-tests-am-master into ${NPC_HOME}/../am-kernels/tests/...${ECHO_NONE}" | tee -a "$LOG_FILE"
        mkdir -p "${NPC_HOME}/am-kernels/tests/"
        cd "${NPC_HOME}/am-kernels/tests/" || { echo -e "${ECHO_RED}Failed to cd to ${NPC_HOME}/am-kernels/tests/${ECHO_NONE}" | tee -a "$LOG_FILE"; SKIP_RISCV_TEST=1; }
        if [ "${SKIP_RISCV_TEST}" = "0" ]; then
            # git clone https://github.com/NJU-ProjectN/riscv-tests-am || { echo -e "${ECHO_RED}git clone failed${ECHO_NONE}"; SKIP_RISCV_TEST=1; }
            git clone https://github.com/NJU-ProjectN/riscv-tests-am >> "$LOG_FILE" 2>&1 || { echo -e "${ECHO_RED}git clone failed${ECHO_NONE}"; SKIP_RISCV_TEST=1; }
            if [ "${SKIP_RISCV_TEST}" = "0" ]; then
                cd "${RISCV_TEST_HOME}" || { echo -e "${ECHO_RED}Failed to cd to ${RISCV_TEST_HOME} after clone${ECHO_NONE}"; SKIP_RISCV_TEST=1; }
            fi
        fi
    else
        echo -e "${ECHO_YELLOW}Skipping RISCV tests as requested.${ECHO_NONE}"
        SKIP_RISCV_TEST=1
    fi
fi

# 如果用户选择跳过或发生错误，则不运行 riscv 测试
if [ "${SKIP_RISCV_TEST}" = "1" ]; then
    echo -e "${ECHO_YELLOW}RISCV-TEST skipped.${ECHO_NONE}"
else
    test_info "RISCV-TEST"
    # make ARCH=${ARCH} -C ${RISCV_TEST_HOME} run  ${ARGS}2>&1 | \
    make ARCH=${ARCH} -C ${RISCV_TEST_HOME} run ${ARGS} 2>&1 | tee -a "$LOG_FILE" | \
    test_catcher

    echo -e "${ECHO_YELLOW}--------------------------------------------------${ECHO_NONE}"
    if [ ${FAIL_CNT} -eq 0 ]; then
        echo "All the riscv-test pass successfully!"
    else
        echo -e "Arch: ${ARCH}"
        echo -e "Args: ${ARGS}"
        echo -e "Pass: ${ECHO_GREEN}${PASS_CNT}${ECHO_NONE}"
        echo -e "Fail: ${ECHO_RED}${FAIL_CNT}${ECHO_NONE}"
    fi
fi
