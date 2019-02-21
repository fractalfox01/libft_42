/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 18:06:09 by tvandivi          #+#    #+#             */
/*   Updated: 2019/02/20 18:08:42 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"

void	ft_putendl_fd(char const *str, int fd)
{
	int i;

	i = 0;
	if (str)
	{
		while (*str != '\0')
		{
			ft_putchar_fd(*str, fd);
			str++;
			i++;
		}
		ft_putchar_fd('\n', fd);
	}
}
