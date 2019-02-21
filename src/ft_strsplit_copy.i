/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 13:25:45 by tvandivi          #+#    #+#             */
/*   Updated: 2019/02/19 15:16:46 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "include/libft.h"
#include <stdio.h>

char	**ft_strsplit(char const *s, char c)
{
	int		memlen;
	char	**tab;
	char	*ptr;
	int		max;
	int		i;
	int		j;
	int		k;
	int		word_start;
	int		b;
	int		flag;
	int		count;

	k = 0;
	i = 0;
	j = 0;
	flag = 1;
	word_start = 0;
	b = 0;
	max = 0;
	memlen = 0;
	count = 0;
	if (s)
	{
		max = ft_wordcount((char *)s, c);
		if (max > 1)
		{
			tab = (char **)malloc(sizeof(char *) * (max + 1));
			if (tab)
			{

				while (s[i] != '\0')
				{
					while (s[i] == c && s[i] != '\0')
					{
						i++;
						if (s[i] == '\0' && !(tab[0]))
							return (NULL);
					}
					while (s[i] != c && s[i] != '\0')
					{
						if (flag == 1)
						{
							flag = 0;
							word_start = i;
						}
						k++;
						i++;
					}
					if (flag == 0)
					{
						ptr = ft_memalloc(k + 1);
						if (ptr)
						{
							while (j < k)
							{
								ptr[j] = s[word_start];
								word_start++;
								j++;
							}
							word_start = 0;
							flag = 1;
							tab[b] = &*ptr;
							ptr = NULL;
							free(ptr);
							b++;
						//	tab++;
						}
					}
					else
					{
						tab[b] = ft_memalloc(1);
						break ;
					}
					k = 0;
					j = 0;
				}
				return (tab);
			}
		}
	}
	return (NULL);
}
// code out a word counter.
