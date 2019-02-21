/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 18:01:28 by tvandivi          #+#    #+#             */
/*   Updated: 2019/02/20 18:05:09 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "include/libft.h"

void	ft_putstr_fd(char const *str, int fd)
{
	if (str)
	{
		write(fd, str, ft_strlen((char *)str));
	}
}
