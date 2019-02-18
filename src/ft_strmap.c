/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 20:57:45 by tvandivi          #+#    #+#             */
/*   Updated: 2019/02/17 23:06:42 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "include/libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*ptr;
	char	*ret;

	if (!s)
		return (NULL);
	ptr = ft_memalloc(ft_strlen((char *)s) + 1);
	ret = ptr;
	if (ret)
	{
		while (*s != '\0')
		{
			*ptr = f(*s);
			ptr++;
			s++;
		}
		*ptr = '\0';
	}
	return (ret);
}
