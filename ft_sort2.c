/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeslall <omeslall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:45:19 by omeslall          #+#    #+#             */
/*   Updated: 2022/02/10 22:08:40 by omeslall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	part_to_b(t_list **a, t_list **b, t_data **data, int first)
{
	if (first != (*data)->main_min && first <= ft_lstlast(*a)->content)
		return ;
	while ((*a)->content != first)
	{
		if ((*a)->index == ft_lstlast(*a)->index + 1)
			ra(a, 1);
		else if (((*a)->next->index == ft_lstlast(*a)->index + 1)
			&& ((*a)->index == (*a)->next->index + 1))
			sa(a, 1);
		else
			pb(a, b, 1);
	}
	ft_stack_data(b, data);
	if (find_next_index_in_b(a, b))
		recursion(a, b, data);
}

void	part_to_a(t_list **a, t_list **b, t_data **data)
{
	int		i;

	ft_stack_data(b, data);
	i = ft_lstsize(*b);
	while (i >= 0 && (*b))
	{
		if ((*b)->content >= (*data)->mid)
			pa(a, b, 1);
		else if (((*b)->index == ft_lstlast(*a)->index + 1) || (*b)->index == 0)
		{
			pa(a, b, 1);
			ra(a, 1);
		}
		else if ((ft_lstlast(*b)->index == ft_lstlast(*a)->index + 1)
			|| ft_lstlast(*b)->index == 0)
		{
			rrb(b, 1);
			pa(a, b, 1);
			ra(a, 1);
		}
		else
			rb(b, 1);
		i--;
	}
}

void	recursion(t_list **a, t_list **b, t_data **data)
{
	int	first;

	if (ft_lstsize(*b) == 0)
		return ;
	first = (*a)->content;
	part_to_a(a, b, data);
	while ((((*a)->index == ft_lstlast(*a)->index + 1)
			|| (*a)->index == 0) && !ft_stack_sorted(a))
		ra(a, 1);
	recursion(a, b, data);
	part_to_b(a, b, data, first);
}

void	ft_sort_large(t_list **a, t_list **b, t_data **data)
{
	ft_stack_data(a, data);
	while (ft_lstsize(*a) - ft_lstsize(*b) > 1)
	{
		if ((*a)->content < (*data)->mid)
			pb(a, b, 1);
		else
			ra(a, 1);
	}
	recursion(a, b, data);
	part_to_b(a, b, data, (*data)->main_min);
}
