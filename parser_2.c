/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <tvandivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 10:12:11 by tvandivi          #+#    #+#             */
/*   Updated: 2019/09/27 17:48:00 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*fp_pointer(long long n)
{
	char		*tmp;
	char		*ret;
	long long	i;
	long long	nbr;
	char		*hex;

	hex = ft_strdup("0123456789abcdef");
	tmp = ft_strnew(21);
	i = 0;
	nbr = n;
	if (nbr < 0)
		nbr *= -1;
	while (nbr / 16 > 0)
	{
		tmp[i++] = hex[(nbr % 16)];
		nbr /= 16;
	}
	tmp[i++] = hex[nbr];
	if (n < 0)
		tmp[i++] = '-';
	tmp[i] = '\0';
	ret = ft_strrev(tmp);
	ft_strdel(&tmp);
	ft_strdel(&hex);
	return (ret);
}

int		parse_ptr(t_glb *glb, t_alst *arg, char *orig)
{
	long long	n;
	char		*tmp;

	if (glb && arg && orig)
	{
		n = va_arg(glb->ap, long long);
		tmp = ft_strjoin("0x", fp_pointer(n));
		arg->info->arg = ft_strjoin(orig, tmp);
		ft_strdel(&tmp);
		glb->total += 1;
		arg->next = new_list();
		arg->next->id = (arg->id + 1);
	}
	return (0);
}

int		parse_s_short(t_glb *glb, t_alst *arg, char *orig)
{
	char	c;
	char	*padded;

	NEGATIVE = 0;
	T_COUNT += 1;
	c = (char)va_arg(glb->ap, unsigned int);
	if (int_norm_helper_1(arg, orig, c))
		return (0);
	if (PRECISION > FIELDWIDTH)
		FIELDWIDTH = PRECISION;
	padded = ft_stoa(c);
	if (PRECISION > 0)
		padded = short_helper(arg, &*padded, c);
	int_norm_helper_2(arg, orig, padded);
	arg->next = new_list();
	NEXT_ID = (CUR_ID + 1);
	return (0);
}

int		parse_short(t_glb *glb, t_alst *arg, char *orig)
{
	long long	c;
	char		*padded;

	T_COUNT += 1;
	c = va_arg(glb->ap, int);
	if (c < 0)
		NEGATIVE = 1;
	if (int_norm_helper_1(arg, orig, c))
		return (0);
	if (PRECISION > FIELDWIDTH)
		FIELDWIDTH = PRECISION;
	padded = ft_stoa(c);
	if (PRECISION > 0)
		padded = short_helper(arg, &*padded, c);
	int_norm_helper_2(arg, orig, padded);
	arg->next = new_list();
	NEXT_ID = (CUR_ID + 1);
	return (0);
}
