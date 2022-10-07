/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svkhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 19:02:17 by svkhacha          #+#    #+#             */
/*   Updated: 2022/09/17 15:39:11 by svkhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	errors(char **str)
{
	if (ft_isdigit(str) == -1)
	{
		write(2, "❌ ERROR: Non digital elements appeared\n", 41);
		exit(0);
	}
	else if (doubles_checking(str) == -1)
	{
		write(2, "❌ ERROR: Duplicate elements appeared\n", 39);
		exit(0);
	}
	else if (biggest_smallest_num(str) == -1)
	{
		write(2, "❌ ERROR: Some value is out of the int range\n", 47);
		exit(0);
	}
}

void	combination_of_sort(t_data *stack)
{
	if (list_size(stack->a) == 3)
		for_three(stack);
	else if (list_size(stack->a) == 4)
		for_four(stack, 0);
	else if (list_size(stack->a) == 5)
		for_five(stack);
	else
	{
		push_to_b(stack);
		push_to_a(stack);
	}
}

int	main(int argc, char **argv)
{
	char	**elements;
	t_data	stack;

	if (argc > 1)
	{
		elements = integers_of_stack(argv);
		errors(elements);
		stack.a = a(elements);
		stack.b = b();
		if (list_size(stack.a) == 1 || sorted(stack.a) == 0)
			return (0);
		if (list_size(stack.a) == 2)
		{
			if (stack.a->data > stack.a->next->data)
				sa(&stack);
			return (0);
		}
		indexation(&stack);
		combination_of_sort(&stack);
	}
	return (0);
}
