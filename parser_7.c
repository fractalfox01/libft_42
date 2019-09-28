/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_7.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <tvandivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 17:01:01 by tvandivi          #+#    #+#             */
/*   Updated: 2019/09/27 17:48:32 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			parse_binary(t_glb *glb, t_alst *arg, char *orig)
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
	padded = ft_itob(c);
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