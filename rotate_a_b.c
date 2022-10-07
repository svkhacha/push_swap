/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a_b.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svkhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 21:37:19 by svkhacha          #+#    #+#             */
/*   Updated: 2022/09/14 19:32:42 by svkhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_data *stacks)
{
	t_list	*first;
	t_list	*second;

	ft_printf("ra\n");
	if (stacks->a == NULL || stacks->a->next == NULL)
		return ;
	first = stacks->a;
	second = stacks->a->next;
	while (stacks->a->next)
		stacks->a = stacks->a->next;
		stacks->a->next = first;
		stacks->a = second;
		first->next = NULL;
}

void	rb(t_data *stacks)
{
	t_list	*first;
	t_list	*second;

	ft_printf("rb\n");
	if (stacks->b == NULL || stacks->b->next == NULL)
		return ;
	first = stacks->b;
	second = stacks->b->next;
	while (stacks->b->next)
		stacks->b = stacks->b->next;
		stacks->b->next = first;
		stacks->b = second;
		first->next = NULL;
}
