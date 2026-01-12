/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshbool <bshbool@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 14:28:52 by bshbool           #+#    #+#             */
/*   Updated: 2026/01/12 17:06:28 by bshbool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	swap(t_stack **head)
{
	t_stack	*first;
	t_stack	*second;

	if (!head || !*head || !(*head)->next)
		return (0);
	first = *head;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*head = second;
	return (1);
}

void	sa(t_stack **a)
{
	if (swap(a))
		write(1, "sa\n", 3);
}

void	sb(t_stack **b)
{
	if (swap(b))
		write(1, "sb\n", 3);
}

void	ss(t_stack **a, t_stack **b)
{
	int	did_a;
	int	did_b;

	did_a = swap(a);
	did_b = swap(b);
	if (did_a || did_b)
		write(1, "ss\n", 3);
}
