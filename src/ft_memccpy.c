/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 12:10:55 by tvandivi          #+#    #+#             */
/*   Updated: 2019/02/11 12:10:57 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t i;
	char *vptr;

	i = 0;
	vptr = (char *)malloc(sizeof(char) * (n + 1));
	while (i < n)
	{
		*(char*)dest = *(char*)src;
		if (*(char*)dest == c)
		{
			dest++;
			i++;
			break;
		}
		dest++;
		src++;
		i++;
	}
	vptr = (char *)dest;
	if (i == n && *(char*)src != c)
		return (NULL);
	*(char *)dest = '\0';	
	return (vptr);
}
