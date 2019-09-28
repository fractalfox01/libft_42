/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <tvandivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 20:03:33 by tvandivi          #+#    #+#             */
/*   Updated: 2019/09/27 17:49:10 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*check_ret(int *ret, char *fmt, int *tot)
{
	if (ret > 0)
	{
		*tot += *ret;
		fmt += *ret;
		*ret = 0;
	}
	return (fmt);
}

/*
**	data for new formatted strings are assigned here
**	and allocated.
*/

int		parse_conversion_spec(t_glb *glb, char *fmt, char *orig)
{
	int		ret;
	int		tot;
	t_alst	*arg;

	tot = 0;
	ret = 0;
	arg = get_arg(glb);
	ret = parse_flags(arg, fmt);
	fmt = check_ret(&ret, fmt, &tot);
	ret = parse_fieldwidth(arg, fmt);
	fmt = check_ret(&ret, fmt, &tot);
	ret = parse_precision(arg, fmt);
	fmt = check_ret(&ret, fmt, &tot);
	ret = parse_lengthmod(arg, fmt);
	fmt = check_ret(&ret, fmt, &tot);
	tot += parse_conversion(glb, fmt, orig);
	return (tot);
}
