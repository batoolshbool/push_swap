/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshbool <bshbool@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 16:03:17 by bshbool           #+#    #+#             */
/*   Updated: 2026/01/14 16:03:28 by bshbool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void radix_sort_bit(t_stack **a, t_stack **b, int bit, int size)
{
    int j;

    j = 0;
    while (j < size)
    {
        if (((*a)->index >> bit) & 1)
            ra(a);
        else
            pb(a, b);
        j++;
    }
    while (*b)
        pa(a, b);
}

void radix_sort(t_stack **a, t_stack **b)
{
    int size;
    int max_index;
    int max_bits;
    int i;

    size = stack_size(*a);
    max_index = get_max_index(*a);

    max_bits = 0;
    while ((max_index >> max_bits) != 0)
        max_bits++;

    i = 0;
    while (i < max_bits)
    {
        radix_sort_bit(a, b, i, size);
        i++;
    }
}