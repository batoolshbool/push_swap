/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshbool <bshbool@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 14:04:29 by bshbool           #+#    #+#             */
/*   Updated: 2026/01/20 16:20:09 by bshbool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	free_split(char **split)
{
	int	i;

	i = 0;
	if (!split)
		return ;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

void	init_stack(t_stack **a, char **argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		stack_add_back(a, stack_new((int)ft_atol(argv[i])));
		i++;
	}
}

static void	sort_dispatch(t_stack **a, t_stack **b)
{
	int	size;

	size = stack_size(*a);
	if (size <= 5)
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
		free_split(input);
	if (!is_sorted(a))
		sort_dispatch(&a, &b);
	free_stack(&a);
	free_stack(&b);
	return (0);
}
