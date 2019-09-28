/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <tvandivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 12:23:54 by tvandivi          #+#    #+#             */
/*   Updated: 2019/09/27 17:49:09 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			has_args(char *fmt)
{
	while (*fmt != '\0')
	{
		if (*fmt == '%')
		{
			return (1);
		}
		fmt++;
	}
	return (0);
}

static int	check_next(char *fmt)
{
	while (*fmt != '\0')
	{
		if (*fmt == '%')
			return (1);
		fmt++;
	}
	return (0);
}

static char	*get_sub_str(char *str, int start, int end)
{
	char	*tmp;
	int		i;

	if (str)
	{
		tmp = (char *)malloc(sizeof(char) * (end - start) + 1);
		i = 0;
		while (start < end && str[start] != '\0')
		{
			tmp[i++] = str[start++];
		}
		tmp[i] = '\0';
		return (tmp);
	}
	return (NULL);
}

/*
** parse_conversion_spec returns number of characters to be skipped
** and saves flags, fieldwidth, precision, and length modifier.
*/

static void	assign(t_var *var, t_glb *glb)
{
	var->tmp = get_sub_str(glb->fmt, var->start, var->stop);
	var->fmt += 1;
	if ((var->i = parse_conversion_spec(glb, var->fmt, var->tmp)) > 0)
	{
		var->fmt += var->i;
		var->stop += var->i + 1;
	}
	else
		var->stop++;
	ft_strdel(&var->tmp);
	var->start = var->stop + 1;
	var->i = 0;
	if (check_next(var->fmt + 1) == 0)
		var->leftovers = ft_strdup(var->fmt + 1);
}

void		save_args(t_glb *glb)
{
	t_var var;

	init_var(&var, glb);
	while (*var.fmt != '\0' && glb->cont == 1)
	{
		if (*var.fmt == '%')
			assign(&var, glb);
		var.stop++;
		var.fmt++;
	}
	add_remainder(glb, var.leftovers);
	ft_strdel(&var.leftovers);
}
