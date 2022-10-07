/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svkhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 20:41:43 by svkhacha          #+#    #+#             */
/*   Updated: 2022/09/14 19:32:09 by svkhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_data *stacks)
{
	t_list	*first;
	t_list	*second;

	ft_printf("sa\n");
	if (stacks->a == NULL || stacks->a->next == NULL)
		return ;
	first = stacks->a;
	second = stacks->a->next;
	first->next = second->next;
	second->next = first;
	stacks->a = second;
}

void	sb(t_data *stacks)
{
	t_list	*first;
	t_list	*second;

	ft_printf("sb\n");
	if (stacks->b == NULL || stacks->b->next == NULL)
		return ;
	first = stacks->b;
	second = stacks->b->next;
	first->next = second->next;
	second->next = first;
	stacks->b = second;
}
