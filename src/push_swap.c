/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshbool <bshbool@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 14:04:29 by bshbool           #+#    #+#             */
/*   Updated: 2026/01/12 17:42:23 by bshbool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack *stack_a;
	t_stack *stack_b;
	char	**stack;

	stack_a = NULL;
	stack_b = NULL;

	//if(argc < 2 || (!argv[1][0] && argc == 2))
		//invalid
	/*else*/ if (argc == 2)
		stack = ft_split(argv[1], ' ');
	//initialize_stack(stack_a, stack);
	if(!is_sorted(stack_a))
	{
		//if (2 numbers) -> swap a
		//else if (3, 4 ,5 numbers) -> sort_small();
		//else -> radix sort;
	}
	//free stacks, return 0
		
}

/*functions

1. invalid input
2. initalize stack
3. is sorted
3. sort small -> file
4. sort big -> file
5. free stacks*/