/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_selection.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 23:09:10 by tvandivi          #+#    #+#             */
/*   Updated: 2019/02/26 21:18:14 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	*sort_selection(int *arr, size_t len)
{
	size_t	i;
	size_t	j;
	int		x;
	int		*ptr;

	i = 0;
	j = 1;
	x = 0;
	ptr = arr;
	while (i < len && (i + 1) != len)
	{
		while (j < len)
		{
			if (arr[j] < arr[i])
				x = arr[j];
			i++;
			j++;
		}
		ptr[i] = x;
		j = i + 1;
	}
	return (ptr);
}
