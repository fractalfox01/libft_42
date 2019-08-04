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
