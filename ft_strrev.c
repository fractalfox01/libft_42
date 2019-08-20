/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <tvandivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 22:56:44 by tvandivi          #+#    #+#             */
/*   Updated: 2019/08/19 18:40:07 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int	i;
	char *rev;
	int	j;

	i = ft_strlen(str);
	rev = ft_strdup(str);
	j = 0;
	while (i >= 0)
	{
		rev[j++] = str[i - 1];
		i--;
	}
	return (rev);
}
