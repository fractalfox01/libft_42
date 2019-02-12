/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 12:11:03 by tvandivi          #+#    #+#             */
/*   Updated: 2019/02/11 12:11:05 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	const void *ptr;
	
	while (*(char *)str != '\0' && *(char *)str != c)
	{
		str++;
		n++;
	}
	if (*(char *)str == c)
		ptr = (void *)str;
	else
		ptr = NULL;
	return ((unsigned char *)ptr);
}
