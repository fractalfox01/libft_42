NAME= libft.a

FLAGS= -Wall -Wextra -Werror

SRC := $(addsuffix .c, ft_lstnew ft_strbuild ft_worditoa ft_power ft_putnbr_fd ft_putendl_fd ft_putstr_fd ft_putchar_fd ft_putendl ft_itoa ft_strxlen ft_wordcount ft_strsplit ft_whitespace ft_strtrim ft_strjoin ft_strsub ft_strnequ ft_strequ ft_strmapi ft_strmap ft_striteri ft_striter ft_strclr ft_strdel ft_strnew ft_memdel ft_memalloc ft_strnlen ft_strnstr ft_strlcat ft_strncat ft_strncpy ft_atoi ft_isascii ft_memchr ft_memset ft_strcat ft_strdup ft_strrchr ft_bzero ft_isdigit ft_memcmp ft_putchar ft_strchr ft_strlcat ft_strstr ft_isalnum ft_isprint ft_memcpy ft_putnbr ft_strcmp ft_strlen ft_tolower ft_isalpha ft_memccpy ft_memmove ft_putstr ft_strcpy ft_strncmp ft_toupper)

OBJ := $(addsuffix .o, ft_lstnew ft_strbuild ft_worditoa ft_power ft_putnbr_fd ft_putendl_fd ft_putstr_fd ft_putchar_fd ft_putendl ft_itoa ft_strxlen ft_wordcount ft_strsplit ft_whitespace ft_strtrim ft_strjoin ft_strsub ft_strnequ ft_strequ ft_strmapi ft_strmap ft_striteri ft_striter ft_strclr ft_strdel ft_strnew ft_memdel ft_memalloc ft_strnlen ft_strnstr ft_strlcat ft_strncat ft_strncpy ft_atoi ft_isascii ft_memchr ft_memset ft_strcat ft_strdup ft_strrchr ft_bzero ft_isdigit ft_memcmp ft_putchar ft_strchr ft_strlcat ft_strstr ft_isalnum ft_isprint ft_memcpy ft_putnbr ft_strcmp ft_strlen ft_tolower ft_isalpha ft_memccpy ft_memmove ft_putstr ft_strcpy ft_strncmp ft_toupper)

$(NAME):
	gcc -c $(FLAGS) $(SRC)
	ar rc libft.a $(OBJ)

all: $(NAME)

clean: 
	for f in $(OBJ) ; do \
		rm $$f || echo "not found"; \
	done

fclean: clean
	rm libft.a || echo "not found"

re: fclean all

.PHONY: fclean testall libft all clean
