/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 20:42:18 by tvandivi          #+#    #+#             */
/*   Updated: 2019/02/12 07:35:57 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;

	ptr = NULL;
	while (*s != c)
		s++;
	if (*s == c)
	{
		*ptr = *s;
	}
	return (ptr);
}
//	The strchr() function locates the first occurrence of c (converted to a char) in the string pointed to by
//	s.  The terminating null character is considered to be part of the string; therefore if c is `\0', the
//	functions locate the terminating `\0'.
