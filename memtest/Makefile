


TARGETS=bad_memory

CROSS_TOOL = 
CC_CPP = $(CROSS_TOOL)g++
CC_C = $(CROSS_TOOL)gcc

CGFLAGS = -Wall -Werror -g -std=c99

all:clean $(TARGETS)

$(TARGETS):
	$(CC_C)  $(CFLAGS) $@.c -o $@


clean:
	rm -f $(TARGETS)
