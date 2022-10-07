/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svkhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 17:32:19 by svkhacha          #+#    #+#             */
/*   Updated: 2022/09/14 19:36:03 by svkhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_data *stacks)
{
	t_list	*a_first;
	t_list	*b_first;

	ft_printf("pa\n");
	if (stacks->b == NULL)
		return ;
	a_first = stacks->a;
	b_first = stacks->b;
	stacks->b = stacks->b->next;
	b_first->next = a_first;
	stacks->a = b_first;
}

void	pb(t_data *stacks)
{
	t_list	*a_first;
	t_list	*b_first;

	ft_printf("pb\n");
	if (stacks->a == NULL)
		return ;
	a_first = stacks->a;
	b_first = stacks->b;
	stacks->a = stacks->a->next;
	a_first->next = b_first;
	stacks->b = a_first;
}
