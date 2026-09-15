NAME = fixdep
SRCS = fixdep.c
CC = gcc
CFLAGS = -Wall -Werror -O2
OBJ_DIR = build
BINARY = $(OBJ_DIR)/fixdep
OBJS = $(SRCS:%.c=$(OBJ_DIR)/%.o)

$(OBJ_DIR)/%.o: %.c
	@echo + CC $<
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c -o $@ $<

$(BINARY): $(OBJS)
	@echo + LD $@
	@$(CC) -o $@ $(OBJS) $(LDFLAGS)

-include $(OBJS:.o=.d)

app: $(BINARY)

fixdep: $(BINARY)

clean:
	-rm -rf $(OBJ_DIR)

.PHONY: app fixdep clean
