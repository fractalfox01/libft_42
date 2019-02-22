/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 13:25:45 by tvandivi          #+#    #+#             */
/*   Updated: 2019/02/21 21:54:27 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "include/libft.h"

char	**help(char **tab, char const *s, char c, int max)
{
	int	b;
	int	i;
	int	len;

	b = 0;
	i = 0;
	len = 0;
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
		else if (s[i] == '\0' && !(tab[b] = NULL))
			return (tab);
	}
	tab[max] = NULL;
	return (tab);
}

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
		tab = help(tab, s, c, max);
		return (tab);
	}
	return (NULL);
}
