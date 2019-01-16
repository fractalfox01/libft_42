ISALNUM_TEST= test/isalnum_test.c

ISALNUM= test/isalnum_test

PUTSTR_TEST= test/putstr_test.c

PUTSTR= test/putstr_test

PUTCHAR_TEST= test/putchar_test.c

PUTCHAR= test/putchar_test

PUTNBR_TEST= test/putnbr_test.c

PUTNBR= test/putnbr_test

MEMCMP_TEST=  test/memcmp_test.c

MEMCMP= test/memcmp_test

MEMSET_TEST=  test/memset_test.c

MEMSET= test/memset_test

MEMCHR_TEST= test/memchr_test.c

MEMCHR= test/memchr_test

MEMCCPY_TEST= test/memccpy_test.c

MEMCCPY= test/memccpy_test

FLAG= -Wall -Werror -Wextra

LIBFT= libft

LIBFT_PATH= include/libft.h

isalnum:
	gcc $(FLAG) $(ISALNUM_TEST) src/*.c -o $(ISALNUM)

putstr:
	gcc $(FLAG) $(PUTSTR_TEST) src/*.c -o $(PUTSTR)

putchar:
	gcc $(FLAG) $(PUTCHAR_TEST) src/*.c -o $(PUTCHAR)

putnbr:
	gcc $(FLAG) $(PUTNBR_TEST) src/*.c -o $(PUTNBR)

memchr:
	gcc $(FLAG) $(MEMCHR_TEST) src/*.c -o $(MEMCHR)

memcmp:
	gcc $(FLAG) $(MEMCMP_TEST) src/*.c -o $(MEMCMP)

memset:
	gcc $(FLAG) $(MEMSET_TEST) src/*.c -o $(MEMSET)

memccpy:
	gcc $(FLAG) $(MEMCCPY_TEST) src/*.c -o $(MEMCCPY)

libft:
	gcc -c src/*.c
	mv *.o bin/
	ar rcs libft.a bin/*.o

all: libft memset memccpy memchr putstr putchar putnbr isalnum memcmp

testall: fclean
	echo "/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/"
	./test/memcmp_test
	echo "/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/"
	./test/memset_test
	echo "/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/"
	./test/memccpy_test
	echo "/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/"
	./test/memchr_test
	echo "/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/"
	./test/putstr_test
	echo "/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/"
	./test/putchar_test
	echo "/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/"
	./test/putnbr_test
	echo "/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/"
	./test/isalnum_test

clean: 
	rm $(MEMCMP) 2>/dev/null || echo "not found"
	rm $(MEMSET) 2>/dev/null || echo "not found"
	rm $(MEMCCPY) 2>/dev/null || echo "not found"
	rm $(MEMCHR) 2>/dev/null || echo "not found"
	rm $(PUTSTR) 2>/dev/null || echo "not found"
	rm $(PUTCHAR) 2>/dev/null || echo "not found"
	rm $(PUTNBR) 2>/dev/null || echo "not found"
	rm $(ISALNUM) 2>/dev/null || echo "not found"
	rm bin/*.o 2>/dev/null || echo "not found"
	rm libft.a || echo "not found"

fclean: clean all

.PHONY: memccpy memchr all clean fclean putstr putchar putnbr
