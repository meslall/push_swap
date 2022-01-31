/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeslall <omeslall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:45:49 by omeslall          #+#    #+#             */
/*   Updated: 2022/01/31 16:45:50 by omeslall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include<unistd.h>
# include<stdlib.h>
# include<stdio.h>
# include<string.h>
# include "./libft/libft.h"

typedef struct s_data
{
	int				main_min;
	int				mid;
	int				min;
	int				max;
}					t_data;

int		ft_check(int argc, char **argv);
int		ft_value(int argc, char **argv);
t_list	*ft_stack(int ac, char **av);
t_data	*ft_data();
void	ft_free(t_list *a, t_list	*b, t_data *data, int i);
int		ft_partition(int *arr, int start, int end);
t_list	*ft_stack(int ac, char **av);
void	ft_index(t_list **a, t_list **b, t_data **data);
void	ft_quick_sort(int *arr, int start, int end);
void	ft_stack_data(t_list **lst, t_data **data);
int		ft_stack_sorted(t_list **lst);
int		find_next_index_in_b(t_list **a, t_list **b);
void	sa(t_list **a, int n);

#endif