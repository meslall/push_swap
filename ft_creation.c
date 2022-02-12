/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_creation.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeslall <omeslall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:44:58 by omeslall          #+#    #+#             */
/*   Updated: 2022/02/12 00:20:07 by omeslall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

t_list	*ft_stack(int ac, char **av)
{
	int		i;
	t_list	*new;
	t_list	*a;

	i = 1;
	a = NULL;
	while (i < ac)
	{
		new = ft_lstnew(ft_atoi(av[i]));
		ft_lstadd_back(&a, new);
		i++;
	}
	return (a);
}

t_data	*ft_data(void)
{
	t_data	*data;

	data = malloc(sizeof(t_data));
	data->main_min = 0;
	data->min = 0;
	data->mid = 0;
	data->max = 0;
	return (data);
}

void	tf_free(t_list *a, t_list *b, t_data *data, int i)
{
	ft_lstclear(&a);
	ft_lstclear(&b);
	free(data);
	if (i == 1)
		ft_putstr_fd("Error\n", 1);
	exit(1);
}

void	ft_stack_data(t_list **lst, t_data **data)
{
	t_list	*temp;
	int		*arr;
	int		i;

	i = 0;
	temp = (*lst);
	arr = malloc(ft_lstsize(*lst) * sizeof(int));
	while (temp)
	{
		arr[i] = temp->content;
		i++;
		temp = temp->next;
	}
	ft_quick_sort(arr, 0, ft_lstsize(*lst) - 1);
	(*data)->min = arr[0];
	(*data)->mid = arr[ft_lstsize(*lst) / 2];
	(*data)->max = arr[ft_lstsize(*lst) - 1];
	free(arr);
}

int	find_next_index_in_b(t_list **a, t_list **b)
{
	t_list	*stack_b;

	stack_b = *b;
	while (stack_b != NULL)
	{
		if (stack_b->index == ft_lstlast(*a)->index + 1)
			return (1);
		stack_b = stack_b->next;
	}
	return (0);
}
