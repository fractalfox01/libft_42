/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 16:26:26 by tvandivi          #+#    #+#             */
/*   Updated: 2019/02/17 01:24:13 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "include/libft.h"

char *ft_strstr(const char *haystack, const char *needle)
{
	char	*h;
	char	*n;
	size_t	nlen;
	size_t	counter;
	char	*ptr;

	h = (char *)haystack;
	n = (char *)needle;
	nlen = ft_strlen(n);
	counter = 0;
	ptr = h;
	if (!(*n))
		return (h);
	while (*h != '\0')
	{
		if (counter < nlen && *n == *h)
		{
			while (*n == *h && *h != '\0')
			{
				counter++;
				if (counter == 1)
					ptr = h;
				if (counter == nlen)
					return (ptr);
				n++;
				h++;
			}
			h = ptr + 1;
			n = (char *)needle;
		}
		counter = 0;
		h++;
	}
	return (NULL);
}
