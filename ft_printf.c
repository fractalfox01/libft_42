/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <tvandivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 16:51:52 by tvandivi          #+#    #+#             */
/*   Updated: 2019/09/27 17:46:34 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			add_remainder(t_glb *glb, char *lo)
{
	t_alst	*arg;
	int		i;
	int		j;

	arg = glb->args;
	i = 0;
	j = 0;
	while (CUR_ID < T_COUNT)
		arg = arg->next;
	T_COUNT += 1;
	ARG = ft_strdup(lo);
	arg->next = (t_alst *)malloc(sizeof(t_alst) * 1);
	arg = arg->next;
	CUR_ID = T_COUNT;
}

void			form_formatted(t_glb *glb)
{
	t_alst	*tmp;
	char	*fmt;

	tmp = glb->args;
	fmt = glb->fmt;
	if (tmp)
	{
		while (tmp->id < T_COUNT)
		{
			glb->ncount += ft_strlen(OUTPUT);
			ft_putstr(OUTPUT);
			ft_strdel(&OUTPUT);
			tmp = tmp->next;
		}
	}
	else
	{
		if (glb->err_type == 1)
			ft_printf("");
	}
}

int				ft_printf(char *fmt, ...)
{
	t_glb	glb;

	glb_init(&glb);
	va_start(glb.ap, fmt);
	if (has_args(fmt) == 0)
	{
		ft_putstr(fmt);
		return (ft_strlen(fmt));
	}
	else
	{
		glb.fmt = ft_strdup(fmt);
		save_args(&glb);
		form_formatted(&glb);
		free_all(&glb);
		return (glb.ncount);
	}
	return (0);
}
