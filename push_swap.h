/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svkhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 20:10:16 by svkhacha          #+#    #+#             */
/*   Updated: 2022/09/17 17:57:55 by svkhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_list
{
	int				data;
	int				index;
	struct s_list	*next;
}	t_list;

typedef struct s_data
{
	t_list	*a;
	t_list	*b;
}	t_data;

size_t			ft_strlen(char *str);
char			*ft_strjoin(char *str1, char *str2);
char			*ft_strdup(char *str);
int				ft_strcmp(char *str1, char *str2);
long long int	ft_atoi(char *str);

size_t			letter_count(char *s, char c);
char			*create_word(char *s, size_t start_index, size_t len);
char			**ft_split(char *s, char c);

void			ft_printf(char *str);
int				ft_isdigit(char **str);
int				doubles_checking(char **str);
int				biggest_smallest_num(char **str);

char			**integers_of_stack(char **argv);
t_list			*a(char **str);
t_list			*b(void);
int				sorted(t_list *node);

void			sa(t_data *stacks);
void			sb(t_data *stacks);
void			ra(t_data *stacks);
void			rb(t_data *stacks);
void			rra(t_data *stacks);
void			rrb(t_data *stacks);
void			pa(t_data *stacks);
void			pb(t_data *stacks);

int				list_size(t_list *node);
int				max_of_b(t_data *stack);
int				for_halfof_stack(t_data *stack);
void			inndexation_2(t_data *stack, t_list *first, t_list *min);
void			indexation(t_data *stack);

void			for_three(t_data *stack);
void			implement_three_nodes(t_data *stack, t_list *node);
void			for_four(t_data *stack, int n);
void			implement_four_nodes(t_data *stack, t_list *node);
void			for_five(t_data *stack);

int				count_n_steps(int size);
void			push_to_b(t_data *stack);
void			push_to_a(t_data *stack);
void			push_max_elements(int i, int size, t_data *stack, t_list *b);

void			errors(char **str);
void			combination_of_sort(t_data *stack);

#endif
