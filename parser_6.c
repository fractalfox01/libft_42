/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_6.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <tvandivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 11:57:48 by tvandivi          #+#    #+#             */
/*   Updated: 2019/09/27 17:48:26 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			int_norm_helper_1(t_alst *arg, char *orig, int c)
{
	if (c == 0)
	{
		if (BLANK == 1)
		{
			ARG = ft_strjoin(orig, "");
			arg->next = new_list();
			NEXT_ID = (CUR_ID + 1);
			return (1);
		}
		if (FIELDWIDTH == 0)
		{
			ARG = ft_strjoin(orig, "0");
			arg->next = new_list();
			NEXT_ID = (CUR_ID + 1);
			return (1);
		}
	}
	return (0);
}

static void	h2_hlpr(t_alst *arg, char *padded, char *orig)
{
	char	*tmp;

	tmp = pad_left(arg, padded, 1);
	tmp[0] = '+';
	ARG = ft_strjoin(orig, tmp);
	ft_strdel(&tmp);
}

void		int_norm_helper_2(t_alst *arg, char *orig, char *padded)
{
	char *tmp;

	tmp = NULL;
	if (MINUS_FLAG == 1)
	{
		if (PLUS_FLAG == 1 && NEGATIVE == 0)
		{
			tmp = ft_strjoin("+", padded);
			ARG = ft_strjoin(orig, pad_right(arg, tmp));
			ft_strdel(&tmp);
		}
		else
			ARG = ft_strjoin(orig, pad_right(arg, padded));
	}
	else if (PLUS_FLAG == 1 && NEGATIVE == 0)
	{
		if (FIELDWIDTH > 0)
			h2_hlpr(arg, padded, orig);
		else
			ARG = ft_strjoin(orig, ft_strjoin("+", pad_left(arg, padded, 1)));
	}
	else if (ZERO_FLAG == 1 && PRECISION > 0)
		ARG = ft_strjoin(orig, pad_left(arg, padded, 0));
	else
		ARG = ft_strjoin(orig, pad_left(arg, padded, 1));
}

int			parse_int_normal(t_glb *glb, t_alst *arg, char *orig)
{
	int		c;
	char	*padded;
	char	*tmp;

	tmp = NULL;
	T_COUNT += 1;
	c = va_arg(glb->ap, int);
	if (c < 0)
		NEGATIVE = 1;
	if (int_norm_helper_1(arg, orig, c))
		return (0);
	tmp = NULL;
	if (PRECISION > FIELDWIDTH)
		FIELDWIDTH = PRECISION;
	padded = ft_itoa(c);
	if (PRECISION > 0)
		padded = int_helper(arg, &*padded, c);
	if (BLANK_FLAG && c > 0)
		padded = blank_helper(padded);
	int_norm_helper_2(arg, orig, padded);
	arg->next = new_list();
	NEXT_ID = (CUR_ID + 1);
	ft_strdel(&padded);
	return (0);
}
