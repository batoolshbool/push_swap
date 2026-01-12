/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshbool <bshbool@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 14:13:13 by bshbool           #+#    #+#             */
/*   Updated: 2026/01/12 18:03:05 by bshbool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../includes/libft.h"
# include <unistd.h>
# include <stdlib.h>

typedef struct s_stack
{
	int		value;
	int		index;
	struct s_stack	*next;
}	t_stack;

// utils
int		is_sorted(t_stack *stack);
int		get_max_index(t_stack *stack);
int		get_min_index(t_stack *stack);

//COMMANDS
void	sa(t_stack **a);
void	ra(t_stack **a);
void	rra(t_stack **a);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);

#endif