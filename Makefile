PUTSTR_TEST= test/putstr_test.c

PUTSTR= test/putstr_test

PUTCHAR_TEST= test/putchar_test.c

PUTCHAR= test/putchar_test

PUTNBR_TEST= test/putnbr_test.c

PUTNBR= test/putnbr_test

MEMCHR_TEST= test/memchr_test.c

MEMCHR= test/memchr_test

MEMCCPY_TEST= test/memccpy_test.c

MEMCCPY= test/memccpy_test

FLAG= -Wall -Werror -Wextra

LIBFT= libft

LIBFT_PATH= include/libft.h

putstr:
	gcc $(FLAG) $(PUTSTR_TEST) src/*.c -o $(PUTSTR)

putchar:
	gcc $(FLAG) $(PUTCHAR_TEST) src/*.c -o $(PUTCHAR)

putnbr:
	gcc $(FLAG) $(PUTNBR_TEST) src/*.c -o $(PUTNBR)

memchr:
	gcc $(FLAG) $(MEMCHR_TEST) src/*.c -o $(MEMCHR)

memccpy:
	gcc $(FLAG) $(MEMCCPY_TEST) src/*.c -o $(MEMCCPY)

libft:
	gcc -c src/*.c
	mv *.o bin/
	ar rcs libft.a bin/*.o

all: libft memccpy memchr putstr putchar putnbr

testall:
	./test/memccpy_test
	./test/memchr_test
	./test/putstr_test
	./test/putchar_test
	./test/putnbr_test

clean: 
	rm $(MEMCCPY) 2>/dev/null || echo "not found"
	rm $(MEMCHR) 2>/dev/null || echo "not found"
	rm $(PUTSTR) 2>/dev/null || echo "not found"
	rm $(PUTCHAR) 2>/dev/null || echo "not found"
	rm $(PUTNBR) 2>/dev/null || echo "not found"
	rm bin/*.o 2>/dev/null || echo "not found"
	rm libft.a || echo "not found"

fclean: clean all

.PHONY: memccpy memchr all clean fclean putstr putchar putnbr
