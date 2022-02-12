/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeslall <omeslall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:45:14 by omeslall          #+#    #+#             */
/*   Updated: 2022/02/12 00:52:46 by omeslall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	ft_stack_sorted(t_list **lst)
{
	t_list	*temp;

	temp = (*lst);
	while (temp->next != NULL)
	{
		if (temp->content > temp->next->content)
			return (0);
		temp = temp->next;
	}
	return (1);
}

void	ft_sort_three(t_list **a)
{
	while (!ft_stack_sorted(a))
	{
		if (((*a)->content > (*a)->next->content)
			&& ((*a)->content > (*a)->next->next->content)
			&& (*a)->next->content < (*a)->next->next->content)
			ra(a, 1);
		else if (((*a)->content < (*a)->next->content)
			&& ((*a)->content > (*a)->next->next->content)
			&& (*a)->next->content > (*a)->next->next->content)
			rra(a, 1);
		else if (((*a)->content > (*a)->next->content)
			|| ((*a)->content < (*a)->next->content))
			sa(a, 1);
	}
}

void	ft_sort_four(t_list **a, t_list **b, t_data **data)
{
	while (ft_lstsize(*a) != 3)
	{
		if ((*a)->index == 0 || (*a)->index == 3)
			pb(a, b, 1);
		else if (ft_lstlast(*a)->index == 0 || ft_lstlast(*a)->index == 3)
		{
			rra(a, 1);
			pb(a, b, 1);
		}
		else
			ra(a, 1);
	}
	ft_sort_three(a);
	pa(a, b, 1);
	if ((*a)->content == (*data)->max)
		ra(a, 1);
}

void	ft_sort_five(t_list **a, t_list **b, t_data **data)
{
	while (ft_lstsize(*a) > 3)
	{
		if ((*a)->index == 0 || (*a)->index == 4)
			pb(a, b, 1);
		else if (ft_lstlast(*a)->index == 0
			|| ft_lstlast(*a)->index == 4)
		{
			rra(a, 1);
			pb(a, b, 1);
		}
		else
			ra(a, 1);
	}
	ft_sort_three(a);
	while (*b != NULL)
	{
		pa(a, b, 1);
		if ((*a)->content == (*data)->max)
			ra(a, 1);
	}
}
