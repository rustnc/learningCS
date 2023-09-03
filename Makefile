CC := gcc
CFLAGS := -Wall -Wextra -IC:\Users\oscar\github\learning-c\libcs50\src
LDFLAGS := -LC:\Users\oscar\github\learning-c\libcs50\src -lcs50

SRCS := hello.c another_file.c
OBJS := $(SRCS:.c=.o)
EXECS := $(SRCS:.c=)

SUBDIRS := lecture1 lecture2 lecture3

all: $(EXECS) $(SUBDIRS)

%: %.c
	@$(CC) $(CFLAGS) $< $(LDFLAGS) -o $@ || (echo "Error compiling $<"; exit 1)

$(SUBDIRS):
	$(MAKE) -C $@

clean:
	@del $(subst /,\,$(OBJS) $(EXECS)) 2> NUL || (echo "Error cleaning"; exit 1)

help:
	@echo "Available targets:"
	@echo "  all (default) - compile all executables"
	@echo "  <filename>    - compile <filename>.c to <filename>"
	@echo "  clean         - remove all compiled files"

.PHONY: all $(SUBDIRS) clean help
