/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_delete.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <tvandivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 19:14:16 by tvandivi          #+#    #+#             */
/*   Updated: 2019/09/27 17:48:57 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			del_info(t_info **info)
{
	if (info)
	{
		free(*info);
		*info = NULL;
	}
}

void			del_arg(t_alst **arg)
{
	if (arg)
	{
		free(*arg);
		*arg = NULL;
	}
}

static t_alst	*fr_1(t_alst *ret, t_info *info, t_alst *arg)
{
	if (ret && info && arg)
	{
		del_info(&arg->info);
		del_arg(&arg);
	}
	return (ret);
}

void			free_all(t_glb *glb)
{
	t_alst	*arg;
	t_alst	*tmp;
	t_info	*inf;
	int		i;

	i = 0;
	arg = glb->args;
	while (CUR_ID < T_COUNT)
	{
		inf = arg->info;
		if (!(inf))
			break ;
		if (ARG)
			ft_strdel(&ARG);
		if (STR)
			ft_strdel(&STR);
		if (TMP1)
			ft_strdel(&TMP1);
		if (TMP2)
			ft_strdel(&TMP2);
		tmp = arg->next;
		arg = fr_1(tmp, arg->info, arg);
	}
	del_arg(&arg);
	ft_strdel(&glb->fmt);
}
