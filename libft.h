/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <tvandivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 20:09:59 by tvandivi          #+#    #+#             */
/*   Updated: 2019/09/27 17:58:38 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include "get_next_line.h"
# include "ft_printf.h"

# define FT_BLACK			"\033[0;30m"
# define FT_RED				"\033[0;31m"
# define FT_GREEN			"\033[0;32m"
# define FT_BROWN			"\033[0;33m"
# define FT_BLUE			"\033[0;34m"
# define FT_PURPLE			"\033[0;35m"
# define FT_CYAN			"\033[0;36m"
# define FT_LIGHTGRAY		"\033[0;37m"
# define FT_DARKGRAY    	"\033[1;30m"
# define FT_LIGHT_RED		"\033[1;31m"
# define FT_LIGHTGREEN		"\033[1;32m"
# define FT_YELLOW			"\033[1;33m"
# define FT_LIGHTBLUE		"\033[1;34m"
# define FT_LIGHTPURPLE		"\033[1;35m"
# define FT_LIGHTCYAN		"\033[1;36m"
# define FT_WHITE			"\033[1;37m"
# define FT_CLEAR_SCREEN	"\033[d"
# define FT_BOLD			"\033[1m"
# define FT_UNDERLINE		"\033[4m"
# define FT_END_ATTR		"\033[0m"

typedef	struct			s_queue
{
	int					front;
	int					rear;
	int					size;
	unsigned int		capacity;
	int					*arr;
}						t_queue;

typedef struct			s_list
{
	void				*content;
	size_t				content_size;
	struct s_list		*next;
}						t_list;

typedef	struct			s_int_list
{
	int					data;
	struct s_int_list	*next;
}						t_int_list;

typedef struct			s_lst_var
{
	t_int_list			*t1;
	t_int_list			*t2;
	t_int_list			*head;
	int					tmp;
	int					size;
	int					i;
	int					j;
}						t_lst_var;

typedef struct			s_ftoa
{
	long long			n;
	char				*int_part;
	char				*stmp;
	long double			d;
	char				*ret;
	int					dir;
}						t_ftoa;

char					*ft_ftoa(long double flt, int afterpoint);
char					*ft_strrev(char *str);
int						ft_otoi(char *str);
char					*ft_itoo(int nbr);
int						ft_ltoo(long nbr);
char					*ft_ltoh(long n);
char					*ft_itoh(unsigned int n);
char					*ft_ltoa(long n);
int						ft_numlen(int i);
int						get_n_char(int fd, char **line, int size);
int						ft_hex_to_int(char *hex);
int						ft_isspace(char c);
int						*ft_strsplit_int(char *str);
int						ft_abs(int nbr);
char					*ft_strpbrk(const char *str1, const char *str2);
int						ft_iscntrl(int c);
int						ft_isgraph(int c);
void					*ft_realloc(void *tab, size_t size);
int						*sort_selection(int *arr, size_t n);
int						*sort_bubble(int *arr, size_t len);
t_list					*sort_list_bubble(t_list *head);
t_list					*ft_lstnew(void const *c, size_t c_s);
t_list					*ft_lstmap(t_list *l, t_list *(*f)(t_list *e));
void					ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void					ft_lstdelone(t_list **a, void (*del)(void *, size_t));
void					ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void					ft_lstadd(t_list **alst, t_list *newl);
void					ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void					ft_putnbr_fd(int nbr, int fd);
void					ft_putendl_fd(char const *str, int fd);
void					ft_putstr_fd(char const *str, int fd);
void					ft_putchar(long c);
void					ft_putstr(char *str);
void					ft_putnbr(int nb);
void					ft_bzero(void *s, size_t n);
long					ft_power(long n, int base);
size_t					ft_strlen(char *str);
int						ft_strnlen(char *str, size_t n);
int						ft_strequ(char const *s1, char const *s2);
int						ft_strnequ(char const *s1, char const *s2, size_t n);
int						ft_whitespace(int c);
int						ft_strxlen(const char *str, char c);
char					**ft_strbuild(char **t, char const *s, char c, int m);
char					*ft_worditoa(char *ptr, long nbr, long len, long b);
char					*ft_strnew(size_t size);
char					*ft_strcpy(char *dest, char *src);
char					*ft_strncat(char *s1, const char *s2, size_t n);
char					*ft_strdup(const char *s);
char					*ft_strchr(const char *s, int c);
char					*ft_strrchr(const char *s, int c);
char					*ft_strstr(const char *haystack, const char *needle);
char					*ft_strnstr(const char *h, const char *n, size_t ln);
char					*ft_strncpy(char *dst, const char *src, size_t len);
char					*ft_strsub(char const *s, unsigned int st, size_t l);
char					*ft_strjoin(char const *s1, char const *s2);
char					*ft_strtrim(char const *s);
char					*ft_strcat(char *dest, char *src);
char					*ft_strmap(char const *s, char (*f)(char));
char					*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char					*ft_itoa(int n);
int						ft_atoi(char *str);
int						ft_strcmp(const char *s1, const char *s2);
int						ft_strncmp(const char *s1, const char *s2, size_t n);
int						ft_isalpha(int nbr);
int						ft_isascii(int nbr);
int						ft_isdigit(int c);
int						ft_isprint(int c);
int						ft_isalnum(int c);
int						ft_tolower(int nb);
int						ft_toupper(int nb);
int						ft_memcmp(const void *s1, const void *s2, size_t n);
int						ft_wordcount(char *str, char c);
void					ft_putchar_fd(char c, int fd);
void					ft_putendl(char const *str);
void					*ft_memmove(void *dest, const void *src, size_t n);
void					*ft_memchr(const void *str, int c, size_t n);
void					*ft_memset(void *s, int c, size_t n);
void					*ft_memccpy(void *dest, const void *src, int c, size_t n);
void					*ft_memcpy(void *dest, const void *src, size_t n);
void					*ft_memalloc(size_t size);
void					ft_memdel(void **ap);
void					ft_strdel(char **as);
void					ft_strclr(char *s);
void					ft_striter(char *s, void (*f)(char *));
void					ft_striteri(char *s, void (*f)(unsigned int, char *));
size_t					ft_strlcat(char *dst, const char *src, size_t dstsize);
char					**ft_strsplit(char const *s, char c);
int						ft_lst_len(t_list *head);
int						ft_int_list_size(t_int_list *begin_list);
t_int_list				*int_bubble_sort_list(t_int_list *lst, int (*cmp)(int, int));
void					ft_put_int_list(t_int_list *lst);
int						ft_destroy_queue(struct s_queue *que);
struct s_queue			*ft_create_queue(unsigned int capacity);
int						ft_enqueue(t_queue *que, int data);
int						ft_dequeue(t_queue *que);
int						ft_queue_is_empty(t_queue *que);
int						ft_queue_is_full(t_queue *que);
int						ft_queue_front(t_queue *que);
int						ft_queue_rear(t_queue *que);
char					*ft_ctoh(unsigned char n);
long long				ft_atoll(char *str);
char					*ft_lltoa(long long n);
char					*ft_itob(int n);
char					*ft_lftoa(long double flt, int afterpoint);
char					*ft_lltoh(long long n);
long long				ft_lltoo(long long nbr);
char					*ft_stoa(short n);
char					*ft_uctoa(unsigned char n);
char					*ft_uitoa(unsigned int c);
char					*ft_ulltoa(unsigned long long n);
char					*ft_ultoa(unsigned long n);
char					*ft_ustoa(unsigned short c);
char					*ft_ustoh(unsigned short n);

/*
** ft_printf functions
*/

int						ft_printf(char *format, ...);
void					glb_init(t_glb *glb);
int						has_args(char *fmt);
void					save_args(t_glb *glb);
void					init_var(t_var *var, t_glb *glb);
void					add_remainder(t_glb *glb, char *lo);
int						parse_flags(t_alst *arglst, char *fmt);
t_alst					*get_arg(t_glb *glb);
int						parse_fieldwidth(t_alst *arglst, char *fmt);
int						parse_precision(t_alst *arglst, char *fmt);
int						parse_lengthmod(t_alst *arglst, char *fmt);
char					*pad_left(t_alst *tmp, char *str, int a);
char					*pad_right(t_alst *tmp, char *str);
int						parse_conversion_spec(t_glb *glb, char *fmt, char *orig);
int						parse_string(t_glb *glb, t_alst *arg, char *orig);
int						parse_char(t_glb *glb, t_alst *arg, char *orig);
int						parse_s_short(t_glb *glb, t_alst *arg, char *orig);
int						parse_short(t_glb *glb, t_alst *arg, char *orig);
int						parse_binary(t_glb *glb, t_alst *arg, char *orig);
int						parse_int(t_glb *glb, t_alst *arg, char *orig);
int						parse_int_normal(t_glb *glb, t_alst *arg, char *orig);
int						parse_long(t_glb *glb, t_alst *arg, char *orig);
int						parse_longlong(t_glb *glb, t_alst *arg, char *orig);
int						parse_ptr(t_glb *glb, t_alst *arg, char *orig);
int						parse_oct(t_glb *glb, t_alst *arg, char *orig);
int						parse_unsigned(t_glb *glb, t_alst *arg, char *orig);
int						parse_hex(t_glb *glb, t_alst *arg, char *orig);
int						parse_bin(t_glb *glb, t_alst *arg, char *orig);
int						parse_float(t_glb *glb, t_alst *arg, char *orig);
int						parse_uint(t_glb *glb, t_alst *arg, char *orig);
int						percent_string(t_glb *glb, t_alst *arg, char *orig);
int						bad_percent(t_glb *glb, t_alst *arg, char *orig, char *fmt);
int						parse_conversion(t_glb *glb, char *fmt, char *orig);
char					*int_helper(t_alst *arg, char *padded, int c);
char					*short_helper(t_alst *arg, char *padded, short c);
int						int_norm_helper_1(t_alst *arg, char *orig, int c);
void					int_norm_helper_2(t_alst *arg, char *orig, char *padded);
char					*long_helper(t_alst *arg, char *padded, long c);
void					ps_helper_1(t_alst *arg, char *orig);
void					ps_helper_2(t_alst *arg, char *orig, char *buf_str);
void					ps_helper_3(t_alst *arg, char *orig, char *buf_str);
void					lnglng_oct_helper(t_alst *arg, long long c, int len);
void					long_hex_helper(t_alst *arg, long c, int len);
char					*assign_x_buf(t_alst *arg, long long c);
void					check_case(t_glb *glb, char **str);
void					hex_flag_find(t_alst *arg, int neg, char *orig);
void					hex_helper_1(t_alst *arg, int a);
void					hex_helper_2(t_glb *glb, t_alst *arg);
void					octal_assign_1(t_alst *arg, char *pad, char *orig, int neg);
void					octal_assign_2(t_alst *arg, char *padded, char *orig);
char					*assign_u_buf(t_alst *arg, unsigned long long c);
void					assign_u_arg(t_alst *arg, char *pad, int neg, char *orig);
char					*blank_helper(char *padded);
t_alst					*new_list(void);
void					free_all(t_glb *glb);
void					del_info(t_info **info);
void					del_arg(t_alst **arg);

#endif
