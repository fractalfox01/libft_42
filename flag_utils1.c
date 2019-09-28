/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_utils1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <tvandivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 19:13:22 by tvandivi          #+#    #+#             */
/*   Updated: 2019/09/27 17:54:38 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** TODO:
**
** Create get_arg function to return the info link to the next list in line.
** using glb->total to obtain appropriate list id
*/

/*
**	checks for ll hh l h
*/

static int	set_z(t_alst *arg)
{
	LENMOD[0] = 'z';
	return (1);
}

static int	set_l(t_alst *arg, char *fmt)
{
	int ret;

	ret = 1;
	LENMOD[0] = 'l';
	fmt++;
	if (*fmt == 'l')
	{
		LENMOD[1] = 'l';
		ret++;
	}
	return (ret);
}

static int	set_h(t_alst *arg, char *fmt)
{
	int ret;

	ret = 1;
	LENMOD[0] = 'h';
	fmt++;
	if (*fmt == 'h')
	{
		LENMOD[1] = 'h';
		ret++;
	}
	return (ret);
}

int			parse_lengthmod(t_alst *arg, char *fmt)
{
	int	ret;

	ret = 0;
	if (*fmt == 'l' || *fmt == 'h' || *fmt == 'L' || *fmt == 'z')
	{
		ret++;
		if (*fmt == 'z')
			ret = set_z(arg);
		else if (*fmt == 'l')
			ret = set_l(arg, fmt);
		else if (*fmt == 'h')
			ret = set_h(arg, fmt);
		else
			LENMOD[0] = 'L';
		return (ret);
	}
	else
		LENMOD[0] = '\0';
	return (0);
}
