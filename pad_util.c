/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pad_util.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <tvandivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 16:03:43 by tvandivi          #+#    #+#             */
/*   Updated: 2019/09/27 17:47:46 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*pad_left(t_alst *arg, char *str, int a)
{
	char	*tmp;
	int		len;
	int		y;
	size_t	i;

	i = 0;
	y = 0;
	len = ft_strlen(str);
	i = (size_t)FIELDWIDTH;
	tmp = ft_strnew(i + 1);
	if (ZERO_FLAG == 1 && a && BLANK_FLAG == 0)
		tmp = ft_memset(tmp, '0', i);
	else
		tmp = ft_memset(tmp, ' ', i);
	if ((size_t)len > i)
	{
		ft_strdel(&tmp);
		return (str);
	}
	NEGATIVE = i - len;
	while (NEGATIVE < (int)i && str[y] != '\0')
		tmp[NEGATIVE++] = str[y++];
	return (tmp);
}

char	*pad_right(t_alst *arg, char *str)
{
	char	*tmp;
	int		len;
	int		y;
	int		x;
	size_t	i;

	i = 0;
	x = 0;
	y = 0;
	len = ft_strlen(str);
	i = (size_t)FIELDWIDTH;
	tmp = ft_strnew(i + 1);
	tmp = ft_memset(tmp, ' ', i);
	if (MINUS_FLAG == 1)
	{
		if ((size_t)len > i)
		{
			ft_strdel(&tmp);
			return (str);
		}
		while (x <= (int)i && str[y] != '\0')
			tmp[x++] = str[y++];
	}
	return (tmp);
}
