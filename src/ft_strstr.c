/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 16:26:26 by tvandivi          #+#    #+#             */
/*   Updated: 2019/02/15 17:12:19 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "include/libft.h"

int	ft_cmp(char *s1, char *s2)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(s1);
	while (!(*s1++ = *s2++))
		i++;
	if (len == i)
		return (1);
	return (0);
}

char *ft_strstr(const char *haystack, const char *needle)
{
	char	*hs;
	char	*n;
	size_t	strlen;
	size_t	hlen;
	size_t	i;

	hs = (char *)haystack;
	n = (char *)needle;
	strlen = ft_strlen(n);
	hlen = ft_strlen(hs);
	i = 0;
	if (!(*n))
		return (hs);
	while (hlen-- > strlen)
	{
		if (!(ft_cmp(hs + i, n)))
		{
			return (hs - i);
		}
		i++;
		hs++;
	}
	return (NULL);
}
