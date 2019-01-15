#ifndef LIBFT_H
# define LIBFT_H

# ifndef STRING_H

#include <string.h>

# endif

void ft_putchar(char c);
void ft_putstr(char *str);
void ft_putnbr(int nb);
int ft_strlen(char *str);
char *ft_strcpy(char *dest, char *src);
char *ft_strdup(const char *s);
int ft_isalpha(int nbr);
int ft_isascii(int nbr);
int ft_isdigit(unsigned char str);
int ft_isprint(unsigned char str);
int ft_isalnum(int c);
void *ft_memchr(const void *str, int c, size_t n);
void *ft_memset(void *s, int c, size_t n);
void *ft_memccpy(void *dest, const void *src, int c, size_t n);
int ft_tolower(int nb);
int ft_toupper(int nb);
char *ft_strcat(char *dest, char *src);

#endif
