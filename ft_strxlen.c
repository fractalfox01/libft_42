/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strxlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 14:54:20 by tvandivi          #+#    #+#             */
/*   Updated: 2019/02/22 21:28:08 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strxlen(const char *str, char c)
{
	int	i;

	i = 0;
	if (str)
	{
		while (str[i] != '\0' && str[i] != c)
		{
			i++;
		}
	}
	return (i);
}
