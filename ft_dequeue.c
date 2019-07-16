/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dequeue.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <tvandivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 16:34:22 by tvandivi          #+#    #+#             */
/*   Updated: 2019/07/15 22:31:16 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_dequeue(t_queue *que)
{
	int data;

	if (ft_queue_is_empty(que) == 0)
	{
		data = que->arr[que->front];
		que->front += 1;
		return (data);
	}
	return (0);
}
