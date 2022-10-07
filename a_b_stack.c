/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_b_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svkhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 18:24:29 by svkhacha          #+#    #+#             */
/*   Updated: 2022/09/14 19:31:41 by svkhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**integers_of_stack(char **argv)
{
	int		i;
	char	*args;
	char	**splited;

	i = 1;
	args = NULL;
	while (argv[i])
	{
		if (!args)
			args = ft_strdup(argv[i]);
		else
		{
			args = ft_strjoin(args, " ");
			args = ft_strjoin(args, argv[i]);
		}
		i++;
	}
	splited = ft_split(args, ' ');
	return (splited);
}

t_list	*a(char **str)
{
	int		i;
	t_list	*first;
	t_list	*temp;
	t_list	*last;

	i = 1;
	first = (t_list *)malloc(sizeof(t_list));
	if (!first || !str[0])
		return (NULL);
	first->data = ft_atoi(str[0]);
	first->next = NULL;
	last = first;
	while (str[i])
	{
		temp = (t_list *)malloc(sizeof(t_list));
		temp->data = ft_atoi(str[i]);
		temp->next = NULL;
		last->next = temp;
		last = temp;
		i++;
	}
	return (first);
}

t_list	*b(void)
{
	return (0);
}

int	sorted(t_list *node)
{
	while (node && node->next)
	{
		if (node->data > node->next->data)
			return (-1);
		node = node->next;
	}
	return (0);
}
