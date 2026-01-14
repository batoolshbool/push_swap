/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshbool <bshbool@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 16:05:31 by bshbool           #+#    #+#             */
/*   Updated: 2026/01/14 16:07:47 by bshbool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	exit_error(void)
{
	write(2, "Error\n", 6);
	exit(EXIT_FAILURE);
}

int	stack_size(t_stack *stack)
{
	int	size;

	size = 0;
	while (stack)
	{
		size++;
		stack = stack->next;
	}
	return (size);
}

int	is_sorted(t_stack *stack)
{
	while (stack && stack->next)
	{
		if ((stack->value) > (stack->next->value))
			return (0);
		stack = stack->next;
	}
	return (1);
}

int	get_min_index(t_stack *stack)
{
	int	min;

	if (!stack)
		return (-1);
	min = stack->index;
	while (stack)
	{
		if ((stack->index) < min)
			min = (stack->index);
		stack = stack->next;
	}
	return (min);
}

int	get_max_index(t_stack *stack)
{
	int	max;

	if (!stack)
		return (-1);
	max = stack->index;
	while (stack)
	{
		if ((stack->index) > max)
			max = (stack->index);
		stack = stack->next;
	}
	return (max);
}
