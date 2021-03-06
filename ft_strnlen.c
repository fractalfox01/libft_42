/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 15:00:29 by tvandivi          #+#    #+#             */
/*   Updated: 2019/02/17 15:58:58 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strnlen(const char *str, size_t n)
{
	int	len;

	len = 0;
	while (str[len] != '\0' && len < (int)n)
	{
		len++;
	}
	return (len);
}
