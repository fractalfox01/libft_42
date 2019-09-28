/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <tvandivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 10:08:10 by tvandivi          #+#    #+#             */
/*   Updated: 2019/09/27 17:47:53 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		parse_oct(t_glb *glb, t_alst *arg, char *orig)
{
	long long	c;

	glb->total += 1;
	c = va_arg(glb->ap, long long);
	if (c < 0)
		arg->info->neg = 1;
	if (PRECISION > FIELDWIDTH)
		FIELDWIDTH = PRECISION;
	if (HASH_FLAG == 1 && c > 0)
		PADDED = ft_strjoin("0", ft_lltoa(ft_lltoo(c)));
	else
		PADDED = ft_lltoa(ft_lltoo(c));
	if (PRECISION > 0)
		lnglng_oct_helper(arg, c, ft_strlen(PADDED));
	if (MINUS_FLAG == 1)
		octal_assign_1(arg, PADDED, orig, NEGATIVE);
	else if (PLUS_FLAG == 1 && NEGATIVE == 0)
		octal_assign_2(arg, PADDED, orig);
	else
		ARG = ft_strjoin(orig, pad_left(arg, PADDED, 0));
	arg->next = new_list();
	arg->next->id = (arg->id + 1);
	return (0);
}

int		parse_unsigned(t_glb *glb, t_alst *arg, char *orig)
{
	unsigned long long	c;
	char				*padded;
	int					neg;

	neg = 0;
	if (glb && arg && orig)
	{
		glb->total += 1;
		c = va_arg(glb->ap, unsigned long long);
		if (c == 0)
		{
			ARG = ft_strjoin(orig, "");
			arg->next = new_list();
			arg->next->id = (arg->id + 1);
		}
		padded = assign_u_buf(arg, c);
		assign_u_arg(arg, padded, neg, orig);
		arg->next = new_list();
		NEXT_ID = CUR_ID + 1;
	}
	return (0);
}

int		parse_hex(t_glb *glb, t_alst *arg, char *orig)
{
	long long	c;
	int			neg;

	neg = 0;
	glb->total += 1;
	c = va_arg(glb->ap, long long);
	if (c < 0)
		neg = 1;
	PADDED = assign_x_buf(arg, c);
	check_case(glb, &PADDED);
	if (HASH_FLAG == 1 && ZERO_FLAG == 0 && c != 0)
		hex_helper_1(arg, HASH_FLAG);
	if (PRECISION > 0)
		long_hex_helper(arg, c, ft_strlen(PADDED));
	hex_flag_find(arg, neg, orig);
	if (HASH_FLAG == 1 && c > 0)
		hex_helper_2(glb, arg);
	glb->upcase = 0;
	arg->next = new_list();
	arg->next->id = (arg->id + 1);
	ft_strdel(&(PADDED));
	return (0);
}
