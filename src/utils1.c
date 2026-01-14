/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshbool <bshbool@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 16:05:44 by bshbool           #+#    #+#             */
/*   Updated: 2026/01/14 16:23:04 by bshbool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	free_stack(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*current;

	if (!stack || !*stack)
		return ;
	current = *stack;
	while (current)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
	*stack = NULL;
}

t_stack	*stack_new(int value)
{
	t_stack	*new_node;

	new_node = malloc(sizeof(t_stack));
	if (!new_node)
		return (NULL);
	new_node->value = value;
	new_node->index = -1;
	new_node->next = NULL;
	return (new_node);
}

static t_stack	*get_next_min(t_stack *stack)
{
	t_stack	*min;

	min = NULL;
	while (stack)
	{
		if (stack->index == -1)
		{
			if (!min || stack->value < min->value)
				min = stack;
		}
		stack = stack->next;
	}
	return (min);
}

void	assign_index(t_stack *stack)
{
	int		i;
	t_stack	*min;

	i = 0;
	while (1)
	{
		min = get_next_min(stack);
		if (!min)
			break ;
		min->index = i;
		i++;
	}
}

void	stack_add_back(t_stack **stack, t_stack *new)
{
	t_stack	*tmp;

	if (!stack || !new)
		return ;
	if (*stack == NULL)
	{
		*stack = new;
		return ;
	}
	tmp = *stack;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
}
