/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_enqueue.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <tvandivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 16:21:53 by tvandivi          #+#    #+#             */
/*   Updated: 2019/07/15 22:42:51 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_enqueue(t_queue *que, int data)
{
	if (ft_queue_is_full(que) == 0)
	{
		que->arr[que->rear] = data;
		que->rear += 1;
		return (data);
	}
	return (0);
}
