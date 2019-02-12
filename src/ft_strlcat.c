/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 21:55:44 by tvandivi          #+#    #+#             */
/*   Updated: 2019/02/12 09:12:37 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../include/libft.h"
/*
 *	The strlcpy() and strlcat() functions copy and concatenate strings with the same input parameters
 *   and output result as snprintf(3).  They are designed to be safer, more consistent, and less error
 *   prone replacements for the easily misused functions strncpy(3) and strncat(3).
 *
 *   strlcpy() and strlcat() take the full size of the destination buffer and guarantee NUL-termination
 *   if there is room.  Note that room for the NUL should be included in dstsize.
 *
 *   strlcpy() copies up to dstsize - 1 characters from the string src to dst, NUL-terminating the result
 *   if dstsize is not 0.
 *
 *   strlcat() appends string src to the end of dst.  It will append at most dstsize - strlen(dst) - 1
 *   characters.  It will then NUL-terminate, unless dstsize is 0 or the original dst string was longer
 *   than dstsize (in practice this should not happen as it means that either dstsize is incorrect or
 *   that dst is not a proper string).
 *
 *   If the src and dst strings overlap, the behavior is undefined.
 */

int	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t	strmax;
	size_t		ret;

	ret = 0;
	strmax = dstsize - ft_strlen(dst) - 1;
	while (*dst)
		dst++;
	while (ret < strmax)
	{
		*dst = *src;
		dst++;
		src++;
		ret++;
	}
	*dst = '\0';
	return (0);
}
