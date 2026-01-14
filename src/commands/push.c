/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshbool <bshbool@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 16:13:27 by bshbool           #+#    #+#             */
/*   Updated: 2026/01/14 16:13:49 by bshbool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	push(t_stack **dst, t_stack **src)
{
	t_stack	*tmp;

	if (!src || !*src)
		return (0);
	tmp = *src;
	*src = tmp->next;
	tmp->next = *dst;
	*dst = tmp;
	return (1);
}

void	pa(t_stack **a, t_stack **b)
{
	if (push(a, b))
		write(1, "pa\n", 3);
}

void	pb(t_stack **b, t_stack **a)
{
	if (push(b, a))
		write(1, "pb\n", 3);
}
