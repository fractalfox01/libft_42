/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_args_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <tvandivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 18:46:42 by tvandivi          #+#    #+#             */
/*   Updated: 2019/09/27 17:48:56 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				bad_percent(t_glb *glb, t_alst *arg, char *orig, char *fmt)
{
	glb->total += 1;
	PADDED = ft_strdup(" ");
	PADDED[0] = *fmt;
	if (arg->info->minus_flag == 1)
	{
		if (arg->info->plus_flag == 1)
			arg->info->arg = ft_strjoin(orig, pad_right(arg, PADDED));
		else
			arg->info->arg = ft_strjoin(orig, pad_right(arg, PADDED));
	}
	else if (arg->info->plus_flag == 1)
		arg->info->arg = ft_strjoin(orig, pad_left(arg, PADDED, 0));
	else
		arg->info->arg = ft_strjoin(orig, pad_left(arg, PADDED, 0));
	arg->next = new_list();
	arg->next->id = (arg->id + 1);
	return (0);
}

static void		ps_helper(t_glb *glb, t_alst *arg, char *orig)
{
	char	*tmp;

	if (glb)
	{
		if (ARG)
		{
			ft_strdel(&ARG);
			ARG = PF_NULL;
		}
		tmp = pad_left(arg, PADDED, 0);
		ARG = ft_strjoin(orig, tmp);
		ft_strdel(&tmp);
	}
}

int				percent_string(t_glb *glb, t_alst *arg, char *orig)
{
	glb->total += 1;
	PADDED = ft_strdup("%");
	if (MINUS_FLAG == 1)
	{
		if (PLUS_FLAG == 1)
			ARG = ft_strjoin(orig, pad_right(arg, PADDED));
		else
			ARG = ft_strjoin(orig, pad_right(arg, PADDED));
	}
	else if (PLUS_FLAG == 1)
		ARG = ft_strjoin(orig, pad_left(arg, PADDED, 0));
	else
		ps_helper(glb, arg, orig);
	arg->next = new_list();
	NEXT_ID = CUR_ID + 1;
	return (0);
}

/*
** The code below << glb->argfun[i](glb, get_arg(glb), orig); >>
** is a function call to a jump table / dispatch table.
** the int variable 'i' is matched with fmt_str to determine appropriate index.
*/

int				parse_conversion(t_glb *glb, char *fmt, char *orig)
{
	int		i;
	int		len;
	char	*fmt_str;

	i = 0;
	fmt_str = ft_strdup("scdiouxXfFp%b");
	len = ft_strlen(fmt_str);
	while (*fmt != fmt_str[i] && i < len)
		i++;
	if (i == 7 || i == 9)
		glb->upcase = 1;
	if (i < len)
		glb->argfun[i](glb, get_arg(glb), orig);
	else
		bad_percent(glb, get_arg(glb), orig, fmt);
	ft_strdel(&fmt_str);
	return (0);
}
