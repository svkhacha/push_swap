/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svkhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 14:54:49 by svkhacha          #+#    #+#             */
/*   Updated: 2022/09/16 17:13:59 by svkhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	list_size(t_list *node)
{
	int	size;

	size = 0;
	while (node)
	{
		size++;
		node = node->next;
	}
	return (size);
}

int	max_of_b(t_data *stack)
{
	int		max;
	t_list	*b;

	max = 0;
	b = stack->b;
	while (b)
	{
		if (b->index > max)
			max = b->index;
		b = b->next;
	}
	return (max);
}

int	for_halfof_stack(t_data *stack)
{
	int		i;
	t_list	*b;

	i = 0;
	b = stack->b;
	while (b->index != max_of_b(stack))
	{
		i++;
		b = b->next;
	}
	if (i <= list_size(stack->b) / 2)
		return (1);
	else
		return (-1);
}

void	indexation_2(t_data *stack, t_list *first, t_list *min)
{
	int	i;
	int	size;

	i = 0;
	size = list_size(stack->a);
	while (i < size)
	{
		min = first;
		while (min)
		{
			if (min->index != -1)
				min = min->next;
			else
				break ;
		}
		while (first)
		{
			if (first->data < min->data && first->index == -1)
				min = first;
			first = first->next;
		}
		min->index = i++;
		first = stack->a;
	}
}

void	indexation(t_data *stack)
{
	t_list	*first;
	t_list	*min;

	first = stack->a;
	min = first;
	while (first)
	{
		first->index = -1;
		first = first->next;
	}
	first = stack->a;
	indexation_2(stack, first, min);
}
