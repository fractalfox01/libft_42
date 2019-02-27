/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 01:24:21 by tvandivi          #+#    #+#             */
/*   Updated: 2019/02/24 17:58:56 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		k;
	char	*ptr;
	size_t	i;

	if (s1 && s2)
	{
		i = 0;
		k = 0;
		ptr = ft_strnew((ft_strlen((char *)s1) + ft_strlen((char *)s2)) + 1);
		if (ptr)
		{
			while (i < ft_strlen((char *)s1))
			{
				ptr[i] = s1[i];
				i++;
			}
			while (i < (ft_strlen((char *)s1) + ft_strlen((char *)s2)))
				ptr[i++] = s2[k++];
			ptr[i] = '\0';
		}
		return (ptr);
	}
	return (NULL);
}
