# libft_42
## A reimplementation of common library functions for 42SiliconValleys Cadet program.

#### __Basic Usage__

The makefile can be used to build and test file through-out these directories.

**Example** (build libft.a)

<pre>
Username>$ ls
bin  extra  include  Makefile  README.md  sort  src  test
Username>$ make libft
gcc -c src/*.c
mv *.o bin/
ar rcs libft.a bin/*.o
Username>$ ls
bin  extra  include  libft.a  Makefile  README.md  sort  src  test
</pre>

### Linking to the library

linking to the library can made easy throught the use of a makefile.
an example is provided in the link_test/ directory

Example:
<pre>
NAME= libtest

LIB= ../libft.a

SRC= $(addsuffix .c, main helper)

$(NAME):
	@printf "Building Project...\n"
	make -C ../
	$(CC) $(SRC) $(LIB) -o libtest

clean:
	@echo "\033[0;32mCleaning Up..."
	make -C ../ clean

fc: fclean

fclean: clean
	rm libtest
	make -C ../ fclean

re: fc all

</pre>
