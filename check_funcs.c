/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svkhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 16:53:36 by svkhacha          #+#    #+#             */
/*   Updated: 2022/09/17 18:15:00 by svkhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* static void	check_number(char *str)
{
	int	k;

	k = 0;
	while (str[k] != ' ' && str[k])
	{
		k++;
		if (str[k] == ' ' || str[k] == '\0')
		{
			if (k > 11)
			{
				write(1, "❌ ERROR: Such a big number\n", 29);
				exit(0);
			}
			if (str[k])
				k++;
		}
	}
}
*/

long long int	ft_atoi(char *str)
{
	int				i;
	int				sign;
	long long int	result;

	i = 0;
	sign = 1;
	result = 0;
//	check_number(str);
	while (str[i] <= 32)
		i++;
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	return (sign * result);
}

int	ft_isdigit(char **str)
{
	int	i;
	int	j;

	i = 0;
	while (str && str[i])
	{
		j = 1;
		if (ft_strcmp(str[i], "-") == 0 || ft_strcmp(str[i], "+") == 0)
			return (-1);
		if (str[i][0] < 43 || (str[i][0] > 43 && str[i][0] < 45)
				|| (str[i][0] > 45 && str[i][0] < 48) || str[i][0] > 57)
			return (-1);
		while (str[i][j])
		{
			if (str[i][j] < 48 || str[i][j] > 57)
				return (-1);
			j++;
		}
		i++;
	}
	return (0);
}

int	doubles_checking(char **str)
{
	int	i;
	int	j;
	int	checker;

	i = 0;
	checker = 0;
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (ft_atoi(str[i]) == ft_atoi(str[j++]))
				checker = -1;
		}
		i++;
	}
	return (checker);
}

int	biggest_smallest_num(char **str)
{
	int				i;
	long long int	num;

	i = 0;
	while (str[i])
	{
		num = ft_atoi(str[i]);
		if (num != 0)
		{
			while (*(str[i]) == '0')
				str[i] += 1;
		}
		if (ft_strlen(str[i]) > 11)
			return (-1);
		if (num > 2147483647 || num < -2147483648)
			return (-1);
		i++;
	}
	return (0);
}
