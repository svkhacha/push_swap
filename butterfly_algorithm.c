/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   butterfly_algorithm.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svkhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:21:31 by svkhacha          #+#    #+#             */
/*   Updated: 2022/09/16 17:36:02 by svkhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_n_steps(int size)
{
	int	n;

	if (size <= 100)
		n = size * 15 / 100;
	else
		n = size * 30 / 500;
	return (n);
}

void	push_to_b(t_data *stack)
{
	int		counter;
	int		n;
	t_list	*a;

	counter = 0;
	n = count_n_steps(list_size(stack->a));
	a = stack->a;
	while (a != NULL)
	{
		if (a->index <= counter)
		{
			pb(stack);
			rb(stack);
			counter++;
		}
		else if (a->index <= counter + n)
		{
			pb(stack);
			counter++;
		}
		else
			ra(stack);
		a = stack->a;
	}
}

void	push_max_elements(int i, int size, t_data *stack, t_list *b)
{
	while (i < size)
	{
		if (b->index == max_of_b(stack))
		{
			pa(stack);
			b = stack->b;
		}
		else
		{
			while (b->index != max_of_b(stack))
			{
				if (for_halfof_stack(stack) == 1)
					rb(stack);
				else
					rrb(stack);
				b = stack->b;
			}
			pa(stack);
			b = stack->b;
		}
		i++;
	}
}

void	push_to_a(t_data *stack)
{
	int		i;
	int		size;
	t_list	*b;

	i = 0;
	b = stack->b;
	size = list_size(stack->b);
	push_max_elements(i, size, stack, b);
}
