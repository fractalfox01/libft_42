MEMCCPY_TEST= test/memccpy_test.c

MEMCCPY= test/memccpy_test

FLAG= -Wall -Werror -Wextra

memccpy:
	gcc $(FLAG) $(MEMCCPY_TEST) src/*.c -o $(MEMCCPY)

all: clean memccpy

clean: 
	rm $(MEMCCPY) 2>/dev/null || echo "$(MEMCCPY) not found"
.PHONY: test
.PHONY: all
