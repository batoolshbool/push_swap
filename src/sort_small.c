/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshbool <bshbool@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 17:20:19 by bshbool           #+#    #+#             */
/*   Updated: 2026/01/14 16:22:19 by bshbool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	rotate_to_top(t_stack **stack, int index)
{
	int		pos;
	int		size;
	t_stack	*tmp;

	pos = 0;
	size = stack_size(*stack);
	tmp = *stack;
	while (tmp && tmp->index != index)
	{
		tmp = tmp->next;
		pos++;
	}
	if (pos <= size / 2)
	{
		while ((*stack)->index != index)
			ra(stack);
	}
	else
	{
		while ((*stack)->index != index)
			rra(stack);
	}
}

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

static void	sort_four(t_stack **a, t_stack **b)
{
	int	min;

	if (is_sorted(*a))
		return ;
	min = get_min_index(*a);
	rotate_to_top(a, min);
	pb(a, b);
	sort_three(a);
	pa(a, b);
}

static void	sort_five(t_stack **a, t_stack **b)
{
	int	min;

	if (is_sorted(*a))
		return ;
	min = get_min_index(*a);
	rotate_to_top(a, min);
	pb(a, b);
	sort_four(a, b);
	pa(a, b);
}

void	sort_small(t_stack **a, t_stack **b)
{
	int	size;

	size = stack_size(*a);
	if (size == 3)
		sort_three(a);
	else if (size == 4)
		sort_four(a, b);
	else if (size == 5)
		sort_five(a, b);
}
