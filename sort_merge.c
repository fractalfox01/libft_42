/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_merge.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <tvandivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 23:27:45 by tvandivi          #+#    #+#             */
/*   Updated: 2019/07/19 21:31:35 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

typedef struct  s_merge
{
    int         *arr;
    int         *tptr;
    int         p1;
    int         p2;
}               t_merge;


void    merge(t_merge *sm, int  l, int m, int r)
{
    int i;

    sm->p1 = l;
    sm->p2 = m + 1;
    i = l;
    while (sm->p1 <= m && sm->p2 <= r)
    {
        if (sm->arr[sm->p1] < sm->arr[sm->p2])
            sm->tptr[i] = sm->arr[sm->p1++];
        else
            sm->tptr[i] = sm->arr[sm->p2++];
    }
    while (sm->p1 <= m)
        sm->tptr[i++] = sm->arr[sm->p1++];
    while (sm->p2 <= r)
        sm->tptr[i++] = sm->arr[sm->p2++];
    i = l;
    while (i <= r)
    {
        sm->arr[i] = sm->tptr[i];
        i++;
    }
}

void    sort_merge(t_merge *sm, int  *arr, int l, int r)
{
    int     m;

    m = (l + r) / 2;
    if (l < r)
    {
        sort_merge(sm, arr, l, m);
        sort_merge(sm, arr, m + 1, r);
        merge(sm, l, m, r);
    }
}

void    s_passof(int *arr, int l, int r)
{
    t_merge sm;

    sm.arr = arr;
    sm.tptr = (int *)malloc(sizeof(int) * r);
    sm.p1 = 0;
    sm.p2 = 0;
    sort_merge(&sm, arr, l, r);
}

void    print_array(int *arr, size_t size)
{
    size_t i;

    i = 0;
    while (i < size)
    {
        printf("%d\n", arr[i]);
        i++;
    }
}

int main(void)
{
    int tab[10] = {12, 43, -12, 45, 18, 105, 601, -779, 1001, 22};
    int *arr;

    arr = tab;
    s_passof(arr, 0, 9);
    print_array(arr, 10);
    return (0);
}