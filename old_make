PKG_FLAGS := `pkg-config --cflags gtk+-3.0`

PKG_LIBS := `pkg-config --libs gtk+-3.0`

LIBFT= libft

GETNXTLINE= extra/getnetline

GETNXTLINE_TEST= extra/get_next_line.c

STRCMP= test/strcmp_test

STRCMP_TEST= test/strcmp_test.c

STRNCMP= test/strncmp_test

STRNCMP_TEST= test/strncmp_test.c

PRINTMEM= extra/print_mem

PRINTMEM_TEST= extra/print_memory.c

ISALNUM_TEST= test/isalnum_test.c

ISALNUM= test/isalnum_test

PUTSTR_TEST= test/putstr_test.c

PUTSTR= test/putstr_test

PUTCHAR_TEST= test/putchar_test.c

PUTCHAR= test/putchar_test

PUTNBR_TEST= test/putnbr_test.c

PUTNBR= test/putnbr_test

MEMMOVE_TEST=  test/memmove_test.c

MEMMOVE= test/memmove_test

MEMCMP_TEST=  test/memcmp_test.c

MEMCMP= test/memcmp_test

MEMSET_TEST=  test/memset_test.c

MEMSET= test/memset_test

MEMCHR_TEST= test/memchr_test.c

MEMCHR= test/memchr_test

MEMCCPY_TEST= test/memccpy_test.c

MEMCCPY= test/memccpy_test

MEMCPY_TEST= test/memcpy_test.c

MEMCPY= test/memcpy_test

FLAG= -Wall -Werror -Wextra -g

LIBFT_PATH= include/libft.h

SRC= $(wildcard src/*.c)

EXE= $(GETNXTLINE) $(ISALNUM) $(PUTSTR) $(PUTCHAR) $(PUTNBR) $(MEMMOVE) $(MEMCHR) $(MEMCMP) $(MEMSET) $(MEMCCPY) $(MEMCPY) $(PRINTMEM) $(STRCMP) $(STRNCMP)

EXE_CMD= isalnum putstr putchar putnbr memmove memchr memcmp memset memccpy printmem strcmp getnextline strncmp memcpy

libft:
	gcc -c $(SRC)
	mv *.o bin/
	ar rcs libft.a $(SRC)

getnextline:
	gcc $(FLAG) $(GETNXTLINE_TEST) -Llibft $(SRC) -o $(GETNXTLINE)

strcmp:
	gcc $(FLAG) $(STRCMP_TEST) -Llibft $(SRC) -o $(STRCMP)

strncmp:
	gcc $(FLAG) $(STRNCMP_TEST) -Llibft $(SRC) -o $(STRNCMP)

printmem:
	gcc $(FLAG) $(PRINTMEM_TEST) -Llibft $(SRC) -o $(PRINTMEM)

isalnum:
	gcc $(FLAG) $(ISALNUM_TEST) $(SRC) -o $(ISALNUM)

putstr:
	gcc $(FLAG) $(PUTSTR_TEST) $(SRC) -o $(PUTSTR)

putchar:
	gcc $(FLAG) $(PUTCHAR_TEST) $(SRC) -o $(PUTCHAR)

putnbr:
	gcc $(FLAG) $(PUTNBR_TEST) $(SRC) -o $(PUTNBR)

memmove:
	gcc $(FLAG) $(MEMMOVE_TEST) -Llibft $(SRC) -o $(MEMMOVE)

memchr:
	gcc $(FLAG) $(MEMCHR_TEST) $(SRC) -o $(MEMCHR)

memcmp:
	gcc $(FLAG) $(MEMCMP_TEST) $(SRC) -o $(MEMCMP)

memset:
	gcc $(FLAG) $(MEMSET_TEST) $(SRC) -o $(MEMSET)

memccpy:
	gcc $(FLAG) $(MEMCCPY_TEST) $(SRC) -o $(MEMCCPY)

memcpy:
	gcc $(FLAG) $(MEMCPY_TEST) $(SRC) -o $(MEMCPY)

gtk:
	gcc $(PKG_FLAGS) -o extra/gtk-window extra/gtk-window.c $(PKG_LIBS)

all: libft $(EXE_CMD)

testall: fclean
	echo "/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/"
	./test/memcmp_test
	echo "/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/"
	./test/memset_test
	echo "/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/"
	./test/memccpy_test
	echo "/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/"
	./test/memmove_test
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
	for f in $(EXE) ; do \
		rm $$f || echo "not found"; \
	done
	rm extra/gtk-window 2>/dev/null || echo "not found"
	rm bin/*.o 2>/dev/null || echo "not found"
	rm libft.a || echo "not found"

fclean: clean all

.PHONY: fclean testall libft all clean $(EXE_CMD)
