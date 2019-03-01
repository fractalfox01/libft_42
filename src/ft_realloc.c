/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 13:49:13 by tvandivi          #+#    #+#             */
/*   Updated: 2019/02/28 14:01:28 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_realloc(void *tab, size_t size)
{
	size_t	i;
	void	*ptr;

	i = 0;
	ptr = ft_memalloc(size);
	if (!tab || ptr)
		return (NULL);
	return (ft_memcpy(ptr, tab, sizeof(tab)));
}
