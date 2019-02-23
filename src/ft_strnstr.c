/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 00:27:08 by tvandivi          #+#    #+#             */
/*   Updated: 2019/02/22 17:31:34 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	l;

	l = ft_strlen((char *)needle);
	if (haystack == 0)
	{
		if (haystack[1] == '\0')
			return ("Segfault");
	}
	if (!l)
		return ((char *)haystack);
	while (len >= l)
	{
		len--;
		if (!(ft_memcmp((char *)haystack, (char *)needle, l)))
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
