/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 13:25:45 by tvandivi          #+#    #+#             */
/*   Updated: 2019/02/20 15:35:16 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "include/libft.h"
#include <stdio.h>



char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		b;
	int		max;
	int len = 0;
	char	**tab;

	i = 0;
	b = 0;
	max = ft_wordcount((char *)s, c);
	tab = (char **)malloc(sizeof(s) * (max + 1));
	if (!tab)
		return (NULL);
	while (b < max && s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != '\0')
		{
			len = ft_strxlen(&s[i], c);
			tab[b] = ft_strnew(len + 1);
			ft_strncpy(tab[b], &s[i], len);
			i += ft_strxlen(&s[i], c);
			b++;
		}
		else if (s[i] == '\0')
		{
			tab[b] = NULL;
			return (tab);
		}
	}
	if (!tab)
		return (NULL);
	tab[b] = NULL;
	return (tab);
}
// code out a word counter.
