/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 12:14:02 by tvandivi          #+#    #+#             */
/*   Updated: 2019/02/11 12:14:04 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t c)
{
	int	ans;

	ans = (int)*s1 - (int)*s2;
	if (!(*s1) || !(*s2))
		return (-1);
	while (c > 0)
	{
		if (*s1 == *s2 && ((*s1 != '\0') && (*s2 != '\0')))
		{
			s1++;
			s2++;
			ans = (int)(*s1) - (int)(*s2);
		}
		else
			break ;
		c--;
	}
	return (ans);
}
