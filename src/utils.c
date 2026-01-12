/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshbool <bshbool@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 17:32:25 by bshbool           #+#    #+#             */
/*   Updated: 2026/01/12 17:51:49 by bshbool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*void	make_indexes(t_stack *stack)
{
	
}*/

int get_max_index(t_stack *stack)
{
	int	max;

	max = stack->index;
	while (stack)
	{
		if ((stack->index) > max)
			max = stack->index;
		stack = stack->next;
	}
	return (max);
}

int	is_sorted(t_stack *stack)
{
	while (stack && stack->next)
	{
		if ((stack->index) > (stack->next->index))
			return (0);
		stack = stack->next;
	}
	return (1);
}
