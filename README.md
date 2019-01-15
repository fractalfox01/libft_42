# libft_42
## A reimplementation of common library functions for 42SiliconValleys Cadet program.

#### __Basic Usage__

The makefile can be used to build and test file through-out these directories.

**Example** (build libft.a)

<pre style="color:white;background:grey;font-size:18px">
Username>$ ls
bin  extra  include  Makefile  README.md  sort  src  test
Username>$ make libft
gcc -c src/*.c
mv *.o bin/
ar rcs libft.a bin/*.o
Username>$ ls
bin  extra  include  libft.a  Makefile  README.md  sort  src  test
</pre>