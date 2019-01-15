MEMCCPY_TEST= test/memccpy_test.c

MEMCCPY= test/memccpy_test

FLAG= -Wall -Werror -Wextra

LIBFT= libft

LIBFT_PATH= include/libft.h

memccpy:
	gcc $(FLAG) $(MEMCCPY_TEST) src/*.c -o $(MEMCCPY)

libft:
	gcc -c src/*.c
	mv *.o bin/
	ar rcs libft.a bin/*.o

all: libft memccpy

clean: 
	rm $(MEMCCPY) 2>/dev/null || echo "not found"
	rm bin/*.o 2>/dev/null || echo "not found"
	rm libft.a || echo "not found"

fclean: clean all

.PHONY: memccpy all
