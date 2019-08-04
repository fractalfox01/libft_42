/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <tvandivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/04 10:20:49 by tvandivi          #+#    #+#             */
/*   Updated: 2019/08/04 10:43:42 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "linktest.h"

int main(void)
{
    int a = 42;
    int b = 24;
    int c = 42;

    ft_putstr("Testing...\n");
    ft_putnbr(usless_helper(a, b, c));
    ft_putchar('\n');
    return (0);
}