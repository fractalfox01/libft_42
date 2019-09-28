/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_fun_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <tvandivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 10:38:52 by tvandivi          #+#    #+#             */
/*   Updated: 2019/09/27 17:47:12 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ps_ functions are called from parse_string; Contained in parse_1.c
*/

void	ps_helper_1(t_alst *arg, char *orig)
{
	char	*tmp;

	tmp = ft_strdup("(null)");
	if (PRECISION > 0 && PRECISION < 6)
		tmp[PRECISION] = '\0';
	ARG = ft_strjoin(orig, pad_left(arg, tmp, 0));
	ft_strdel(&tmp);
	arg->next = new_list();
	NEXT_ID = (CUR_ID + 1);
}

void	ps_helper_2(t_alst *arg, char *orig, char *buf_str)
{
	TMP1 = ft_strdup("(null)");
	if (PRECISION > 0)
	{
		TMP2 = ft_strnew(PRECISION);
		TMP2 = ft_strncpy(TMP2, TMP1, PRECISION);
		ft_strdel(&TMP1);
		TMP1 = ft_strdup(TMP2);
		ft_strdel(&TMP2);
	}
	if (MINUS_FLAG == 1 && !(buf_str) && BLANK == 0)
		ARG = ft_strjoin(orig, pad_right(arg, TMP1));
	else if (BLANK == 0 && !(buf_str))
		ARG = ft_strjoin(orig, pad_left(arg, TMP1, 0));
	else if (MINUS_FLAG == 1 && BLANK == 1 && !(buf_str) && PRECISION > 0)
	{
		TMP2 = ft_strnew(PRECISION);
		TMP2 = ft_strncpy(TMP2, (const char *)TMP1, (size_t)PRECISION);
		ARG = ft_strjoin(orig, pad_left(arg, TMP2, 0));
		ft_strdel(&TMP2);
	}
	else
		ARG = ft_strjoin(orig, pad_left(arg, "", 0));
	arg->next = new_list();
	NEXT_ID = (CUR_ID + 1);
	ft_strdel(&TMP1);
}

void	ps_helper_3(t_alst *arg, char *orig, char *buf_str)
{
	size_t	buf_len;
	int		i;

	i = 0;
	buf_len = (size_t)FIELDWIDTH + ft_strlen(buf_str);
	if (PLUS_FLAG == 1 || HASH_FLAG == 1 || BLANK_FLAG == 1)
		ARG = ft_strdup("");
	if (PRECISION)
	{
		STR = ft_strnew((size_t)PRECISION);
		while (i < PRECISION && buf_str[i] != '\0')
		{
			STR[i] = buf_str[i];
			i++;
		}
		buf_str = ft_strdup(STR);
		ft_strdel(&(STR));
	}
	if (MINUS_FLAG == 1)
		ARG = ft_strjoin(orig, pad_right(arg, buf_str));
	else
		ARG = ft_strjoin(orig, pad_left(arg, buf_str, 0));
	arg->next = new_list();
	NEXT_ID = (CUR_ID + 1);
}

char	*assign_u_buf(t_alst *arg, unsigned long long c)
{
	char	*padded;

	if (PRECISION > FIELDWIDTH)
		FIELDWIDTH = PRECISION;
	else if (LENMOD[0] == 'l' || LENMOD[0] == 'z')
	{
		if (LENMOD[1] == 'l' || LENMOD[0] == 'z')
			padded = ft_ulltoa(c);
		else
			padded = ft_ultoa((unsigned long)c);
	}
	else if (LENMOD[0] == 'h')
	{
		if (LENMOD[1] == 'h')
			padded = ft_uctoa((unsigned char)c);
		else
			padded = ft_ustoa((unsigned short)c);
	}
	else
		padded = ft_uitoa((unsigned int)c);
	if (PRECISION > 0)
		padded = long_helper(arg, &*padded, c);
	return (padded);
}

void	assign_u_arg(t_alst *arg, char *padded, int neg, char *orig)
{
	char	*tmp;

	if (MINUS_FLAG == 1)
	{
		if (PLUS_FLAG == 1 && neg == 0)
		{
			tmp = ft_strjoin("+", padded);
			ARG = ft_strjoin(orig, pad_right(arg, tmp));
			ft_strdel(&tmp);
		}
		else
			ARG = ft_strjoin(orig, pad_right(arg, padded));
	}
	else if (PLUS_FLAG == 1 && neg == 0)
	{
		tmp = ft_strjoin("+", padded);
		ARG = ft_strjoin(orig, pad_left(arg, tmp, 0));
		ft_strdel(&tmp);
	}
	else
		ARG = ft_strjoin(orig, pad_left(arg, padded, 0));
}
