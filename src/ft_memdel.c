/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 16:42:54 by tvandivi          #+#    #+#             */
/*   Updated: 2019/02/17 20:10:19 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "include/libft.h"

void	ft_memdel(void **ap)
{
	if (ap)
	{
		ft_memset(ap, 0, sizeof(ap));
		free(*ap);
	}
}
