/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshbool <bshbool@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 17:20:19 by bshbool           #+#    #+#             */
/*   Updated: 2026/01/12 18:15:47 by bshbool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	sort_three(t_stack **stack_a)
{
	int	max;

	if (is_sorted(*stack_a))
		return ;
	max = get_max_index(*stack_a);
	if ((*stack_a)->index == max)
	{
		ra(stack_a);
		if (!is_sorted(*stack_a))
			sa(stack_a);
	}
	else if ((*stack_a)->next->index == max)
	{
		sa(stack_a);
		ra(stack_a);
		if (!is_sorted(*stack_a))
			sa(stack_a);
	}
	else
		sa(stack_a);
}

static void	sort_four(t_stack **stack_a, t_stack **stack_b)
{
	int	min;

	min = get_min_index(*stack_a);
	if (is_sorted(*stack_a))
		return ;
	if ((*stack_a)->next->next->next->index == min)
		rra(stack_a);
	while ((*stack_a)->index != min)
		ra(stack_a);
	if ((*stack_a)->index == min)
	{
		pb(stack_a, stack_b);
		sort_three(stack_a);
		pa(stack_a, stack_b);
		return ;
	}
}

static void	sort_five(t_stack **stack_a, t_stack **stack_b)
{
	int	min;

	min = get_min_index(*stack_a);
	if (is_sorted(*stack_a))
		return ;
	if ((*stack_a)->next->next->next->next->index == min)
		rra(stack_a);
	while ((*stack_a)->index != min)
		ra(stack_a);
	if ((*stack_a)->index == min)
	{
		pb(stack_a, stack_b);
		sort_four(stack_a, stack_b);
		pa(stack_a, stack_b);
		return ;
	}
}
