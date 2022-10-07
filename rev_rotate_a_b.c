/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate_a_b.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svkhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 18:23:15 by svkhacha          #+#    #+#             */
/*   Updated: 2022/09/14 19:33:12 by svkhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_data *stacks)
{
	t_list	*first;
	t_list	*beforelast;
	t_list	*last;

	ft_printf("rra\n");
	if (stacks->a == NULL || stacks->a->next == NULL)
		return ;
	first = stacks->a;
	while (stacks->a->next->next != NULL)
		stacks->a = stacks->a->next;
	beforelast = stacks->a;
	last = stacks->a->next;
	last->next = first;
	beforelast->next = NULL;
	first = last;
	stacks->a = first;
}

void	rrb(t_data *stacks)
{
	t_list	*first;
	t_list	*beforelast;
	t_list	*last;

	ft_printf("rrb\n");
	if (stacks->b == NULL || stacks->b->next == NULL)
		return ;
	first = stacks->b;
	while (stacks->b->next->next != NULL)
		stacks->b = stacks->b->next;
	beforelast = stacks->b;
	last = stacks->b->next;
	last->next = first;
	beforelast->next = NULL;
	first = last;
	stacks->b = first;
}
