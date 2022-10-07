/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svkhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 16:37:55 by svkhacha          #+#    #+#             */
/*   Updated: 2022/09/16 17:08:12 by svkhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str && str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *str1, char *str2)
{
	int		i;
	int		j;
	char	*conc;
	size_t	len;

	i = 0;
	j = 0;
	len = ft_strlen(str1) + ft_strlen(str2) + 1;
	conc = (char *)malloc(sizeof(char) * len);
	if (!conc)
		return (NULL);
	while (str1[i])
	{
		conc[i] = str1[i];
		i++;
	}
	while (str2[j])
	{
		conc[i + j] = str2[j];
		j++;
	}
	conc[i + j] = '\0';
	free(str1);
	return (conc);
}

char	*ft_strdup(char *str)
{
	int		i;
	size_t	len;
	char	*dup;

	i = 0;
	len = ft_strlen(str) + 1;
	dup = (char *)malloc(sizeof(char) * len);
	if (!dup)
		return (NULL);
	while (str[i])
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0')
		i++;
	return (str1[i] - str2[i]);
}

void	ft_printf(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}
