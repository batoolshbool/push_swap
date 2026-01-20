/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshbool <bshbool@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 14:13:13 by bshbool           #+#    #+#             */
/*   Updated: 2026/01/20 16:20:46 by bshbool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../includes/libft.h"
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
}					t_stack;

void				exit_error(void);
int					stack_size(t_stack *stack);
int					is_sorted(t_stack *stack);
int					get_min_index(t_stack *stack);
int					get_max_index(t_stack *stack);
void				free_stack(t_stack **stack);
t_stack				*stack_new(int value);
void				assign_index(t_stack *stack);
void				stack_add_back(t_stack **stack, t_stack *new);
long				ft_atol(const char *str);
int					is_valid_input(char **numbers);
void				sort_small(t_stack **a, t_stack **b);
void				radix_sort(t_stack **a, t_stack **b);
void				init_stack(t_stack **a, char **argv);

//swap
void				sa(t_stack **a);
void				sb(t_stack **b);
void				ss(t_stack **a, t_stack **b);
//rotate
void				ra(t_stack **a);
void				rb(t_stack **b);
void				rr(t_stack **a, t_stack **b);
//reverse rotate
void				rra(t_stack **a);
void				rrb(t_stack **b);
void				rrr(t_stack **a, t_stack **b);
//push
void				pa(t_stack **a, t_stack **b);
void				pb(t_stack **b, t_stack **a);

#endif