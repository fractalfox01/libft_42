/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <tvandivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 12:03:21 by tvandivi          #+#    #+#             */
/*   Updated: 2019/09/27 17:59:06 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

# define PF_NULL		(void *)0
# define FMT_SPEC		"scdiouxXfp"
# define IS_UPPERCASE	glb->upcase
# define OUTPUT			tmp->info->arg
# define PADDED			arg->info->padded
# define BLANK			arg->info->blank
# define FIELDWIDTH		arg->info->fieldwidth
# define PRECISION		arg->info->precision
# define LENMOD			arg->info->lenmod
# define MINUS_FLAG		arg->info->minus_flag
# define PLUS_FLAG		arg->info->plus_flag
# define HASH_FLAG		arg->info->hash_flag
# define BLANK_FLAG		arg->info->blank_flag
# define ZERO_FLAG		arg->info->zero_flag
# define NEGATIVE		arg->info->neg
# define ARG			arg->info->arg
# define STR			arg->info->str
# define TMP1			arg->info->tmp1
# define TMP2			arg->info->tmp2
# define CUR_ID			arg->id
# define NEXT_ID		arg->next->id
# define T_COUNT		glb->total

typedef struct		s_var
{
	int				i;
	int				stop;
	int				start;
	char			*leftovers;
	char			*tmp;
	char			*arg;
	char			*fmt;
}					t_var;

typedef struct		s_info
{
	int				blank_flag:2;
	int				hash_flag:2;
	int				minus_flag:2;
	int				plus_flag:2;
	int				zero_flag:2;
	int				fieldwidth;
	int				precision;
	int				blank;
	char			lenmod[3];
	int				neg;
	char			*padded;
	char			*tmp1;
	char			*tmp2;
	char			*str;
	char			*arg;
}					t_info;

typedef struct		s_alist
{
	int				id;
	t_info			*info;
	struct s_alist	*next;
}					t_alst;

typedef struct		s_ftpf
{
	va_list			ap;
	int				(*argfun[15])(struct s_ftpf *g, t_alst *a, char *o);
	int				*ret;
	int				ncount;
	size_t			ret_total;
	char			*fmt;
	int				total;
	int				buf;
	int				upcase;
	int				cont;
	int				err_type;
	t_alst			*args;
}					t_glb;

#endif
