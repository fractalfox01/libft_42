/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 00:27:08 by tvandivi          #+#    #+#             */
/*   Updated: 2019/02/17 01:20:14 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "include/libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
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
	while (*h != '\0' && len > 0)
	{
		if (counter < nlen && *n == *h)
		{
			while (*n == *h && *h != '\0' && len-- > 0)
			{
				counter++;
				if (counter == 1)
					ptr = h;
				if (counter == nlen)
					return (ptr);
				n++;
				h++;
			}
			len += counter;
			h = ptr + 1;
			n = (char *)needle;
		}
//		if (counter == nlen)
//			return (ptr);
		counter = 0;
		h++;
		len--;
	}
	return (NULL);
}
