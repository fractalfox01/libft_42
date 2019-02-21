/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 20:09:59 by tvandivi          #+#    #+#             */
/*   Updated: 2019/02/20 15:36:19 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

void	ft_putchar(int c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	ft_bzero(void *s, size_t n);
int		ft_strlen(char *str);
int		ft_strnlen(char *str, size_t n);
int		ft_strequ(char const *s1, char const *s2);
int 	ft_strnequ(char const *s1, char const *s2, size_t n);
int		ft_whitespace(int c);
int		ft_strxlen(const char *str, char c);
char	*ft_strnew(size_t size);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strncat(char *s1, const char *s2, size_t n);
char	*ft_strdup(const char *s);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strncpy(char *dst, const char *src, size_t len);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s);
char	*ft_strcat(char *dest, char *src);
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_itoa(int n);
int		ft_atoi(char *str);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_isalpha(int nbr);
int		ft_isascii(int nbr);
int		ft_isdigit(unsigned char str);
int		ft_isprint(unsigned char str);
int		ft_isalnum(int c);
int		ft_tolower(int nb);
int		ft_toupper(int nb);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_wordcount(char *str, char c);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *str, int c, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
void	ft_strdel(char **as);
void	ft_strclr(char *s);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
char	**ft_strsplit(char const *s, char c);

#endif
