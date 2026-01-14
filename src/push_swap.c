/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshbool <bshbool@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 14:04:29 by bshbool           #+#    #+#             */
/*   Updated: 2026/01/14 18:57:52 by bshbool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	init_stack(t_stack **a, char **argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		stack_add_back(a, stack_new(ft_atoi(argv[i])));
		i++;
	}
}

static void	sort_dispatch(t_stack **a, t_stack **b)
{
	int	size;

	size = stack_size(*a);
	if (size == 2)
		sa(a);
	else if (size <= 5)
		sort_small(a, b);
	else
		radix_sort(a, b);
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	char	**input;

	a = NULL;
	b = NULL;
	if (argc < 2)
		return (0);
	if (argc == 2)
		input = ft_split(argv[1], ' ');
	else
		input = argv + 1;
	if (!is_valid_input(input))
		exit_error();
	init_stack(&a, input);
	assign_index(a);
	if (argc == 2)
		free(input);
	if (!is_sorted(a))
		sort_dispatch(&a, &b);
	free_stack(&a);
	return (0);
}
