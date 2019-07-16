/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_queue.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <tvandivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 16:08:12 by tvandivi          #+#    #+#             */
/*   Updated: 2019/07/15 22:39:50 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_queue *ft_create_queue(unsigned int capacity)
{
	t_queue    *que;

	que = (t_queue *)malloc(sizeof(t_queue) * 1);
	que->capacity = capacity;
	que->size = capacity - 1;
	que->front = 0;
	que->rear = 0;
	que->arr = (int *)malloc(sizeof(int) * que->capacity);
	return (que);
};
