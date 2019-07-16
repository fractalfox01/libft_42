/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy_queue.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <tvandivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 16:15:29 by tvandivi          #+#    #+#             */
/*   Updated: 2019/07/15 22:40:19 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_destroy_queue(struct s_queue *que)
{
	if (que)
	{
		free((void *)que->arr);
		ft_memdel((void **)&que);
		return (1);
	}
	return (0);
}
