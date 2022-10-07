/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nodes_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svkhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 20:14:27 by svkhacha          #+#    #+#             */
/*   Updated: 2022/09/16 17:19:41 by svkhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	for_three(t_data *stack)
{
	t_list	*first;
	t_list	*second;
	t_list	*last;

	first = stack->a;
	second = stack->a->next;
	last = stack->a->next->next;
	if (sorted(first) == 0)
		return ;
	else if (first->index < second->index && first->index < last->index)
	{
		rra(stack);
		sa(stack);
	}
	else if (first->index < second->index && first->index > last->index)
		rra(stack);
	else if (first->index > second->index && first->index < last->index)
		sa(stack);
	else
	{
		ra(stack);
		if (second->index > last->index)
			sa(stack);
	}
}

void	implement_three_nodes(t_data *stack, t_list *node)
{
	if (sorted(node) == -1)
	{
		pb(stack);
		for_three(stack);
		pa(stack);
	}
}

void	for_four(t_data *stack, int n)
{
	t_list	*first;
	int		i;

	first = stack->a;
	i = 0;
	while (first)
	{
		if (first->index == n)
			break ;
		i++;
		first = first->next;
	}
	first = stack->a;
	while (first->index != n)
	{
		if (i < 2)
			ra(stack);
		else
			rra(stack);
		first = stack->a;
	}
	implement_three_nodes(stack, first);
}

void	implement_four_nodes(t_data *stack, t_list *node)
{
	if (sorted(node) == -1)
	{
		pb(stack);
		for_four(stack, 1);
		pa(stack);
	}
}

void	for_five(t_data *stack)
{
	int		i;
	t_list	*first;

	i = 0;
	first = stack->a;
	while (first)
	{
		if (first->index == 0)
			break ;
		i++;
		first = first->next;
	}
	first = stack->a;
	while (first->index != 0)
	{
		if (i < 2)
			ra(stack);
		else
			rra(stack);
		first = stack->a;
	}
	implement_four_nodes(stack, first);
}
