NAME = conf
obj := build
SRCS = confdata.c expr.c preprocess.c symbol.c util.c
SRCS += $(obj)/lexer.lex.c $(obj)/parser.tab.c
CC = gcc
CFLAGS = -DYYDEBUG -Wall -Werror
INC_PATH = .
OBJ_DIR = $(obj)
DISTRO = $(shell cat /etc/os-release 2>/dev/null | grep PRETTY_NAME | sed 's/PRETTY_NAME=//')

ifeq ($(DISTRO),"Gentoo Linux")
LIBS += -ltinfo
endif

ifeq ($(NAME),conf)
SRCS += conf.c
BINARY = $(obj)/conf
else ifeq ($(NAME),mconf)
SRCS += mconf.c $(shell find lxdialog/ -name "*.c")
LIBS += -lncurses
BINARY = $(obj)/mconf
else
$(error bad target=$(NAME))
endif

INCLUDES = $(addprefix -I, $(INC_PATH))
CFLAGS += $(INCLUDES)
OBJS = $(SRCS:%.c=$(OBJ_DIR)/%.o)

# Build rules
$(OBJ_DIR)/%.o: %.c
	@echo + CC $<
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c -o $@ $<

$(BINARY): $(OBJS)
	@echo + LD $@
	@$(CC) -o $@ $(OBJS) $(LDFLAGS) $(LIBS)

$(obj)/lexer.lex.o: $(obj)/parser.tab.h
$(obj)/lexer.lex.c: lexer.l $(obj)/parser.tab.h
	@echo + LEX $@
	@flex -o $@ $<

$(obj)/parser.tab.c $(obj)/parser.tab.h: parser.y
	@echo + YACC $@
	@bison -v $< --defines=$(obj)/parser.tab.h -o $(obj)/parser.tab.c

-include $(OBJS:.o=.d)

conf:
	@$(MAKE) -s NAME=conf

mconf:
	@$(MAKE) -s NAME=mconf

clean:
	-rm -rf $(obj)

.PHONY: conf mconf clean
