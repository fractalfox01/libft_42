/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 13:25:45 by tvandivi          #+#    #+#             */
/*   Updated: 2019/02/22 17:36:33 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int		max;
	char	**tab;

	if (s && c)
	{
		max = ft_wordcount((char *)s, c);
		tab = (char **)malloc(sizeof(s) * (max + 1));
		if (!tab)
			return (NULL);
		tab = ft_strbuild(tab, s, c, max);
		return (tab);
	}
	return (NULL);
}
