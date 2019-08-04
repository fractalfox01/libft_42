/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list_merge.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <tvandivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 19:48:51 by tvandivi          #+#    #+#             */
/*   Updated: 2019/07/17 20:39:50 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int ascending(int a, int b)
{
	return (a <= b);
}

int decending(int a, int b)
{
	return (a >= b);
}

int ft_lstxlen(t_list *lst, int i)
{
    int l;
    int a;

    a = 0;
    l = ft_lst_len(lst);
    while (i < l)
    {
        a++;
        i++;
    }
    return (a);
}

t_list	*int_merge_sort_list(t_list *lst, int l, int r, int (*cmp)(int, int))
{
    int mid;

    l = 0;
    r = ft_lstxlen(lst, r);
    mid = ((r % 2) == 0) ? (r / 2) : ((r / 2) + 1);
    if (l < r)
    {
        int_merge_sort_list(lst, l, r, cmp);
    }
    ft_putstr("Done\n");
    return (lst);
}

void	print_list(t_list *ptr)
{
    int a;
	while (ptr)
	{
        a = (int)ptr->content;
		printf("%d\n", a);
		ptr = ptr->next;
	}
}

int		main(int ac, char **av)
{
	t_list	*lst;
	t_list	*head;
	int		i;
    int     a;
    int     *p;

	i = 1;
	if (ac >= 2)
	{
		lst = (t_list *)malloc(sizeof(t_list) * 1);
		head = lst;
		while (i < ac)
		{
            a = atoi(av[i]);
            p = &a;
			lst->content = (void *)p;
            lst->content_size = sizeof(int);
			if ((i + 1) < ac)
			{
				lst->next = (t_list *)malloc(sizeof(t_list) * 1);
				lst = lst->next;
			}
			i++;
		}	
		lst->next = NULL;
		int_merge_sort_list(head, 0, 100, ascending);
		printf("Ascending:\n");
		print_list(head);
		int_merge_sort_list(head, 0, 100, decending);
		printf("\n\nDecending:\n");
		print_list(head);
	}
	else
	{
		printf("Enter some numbers:\n");
	}
	return (0);
}
