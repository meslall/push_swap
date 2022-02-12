/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeslall <omeslall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:45:33 by omeslall          #+#    #+#             */
/*   Updated: 2022/02/12 00:42:46 by omeslall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb(t_list **b, int n)
{
	t_list	*first;
	t_list	*last;

	if ((*b == NULL) || ft_lstsize(*b) < 2)
		return ;
	first = *b;
	last = ft_lstlast(first);
	*b = first->next;
	last->next = first;
	first->next = NULL;
	if (n == 1)
		write(1, "rb\n", 3);
}

void	rrb(t_list **b, int n)
{
	t_list	*first;
	t_list	*last;
	t_list	*n_f;

	if ((*b == NULL) || ft_lstsize(*b) < 2)
		return ;
	first = *b;
	last = first;
	while (last->next->next != NULL)
		last = last->next;
	n_f = last->next;
	n_f->next = first;
	*b = n_f;
	last->next = NULL;
	if (n == 1)
		write(1, "rrb\n", 4);
}

void	pa(t_list **a, t_list **b, int n)
{
	t_list	*node;

	if (*b == NULL)
		return ;
	node = *b;
	(*b) = (*b)->next;
	node->next = *a;
	*a = node;
	if (n == 1)
		write(1, "pa\n", 3);
}

void	rr(t_list **a, t_list **b, int n)
{
	if (((*a == NULL) || (ft_lstsize(*a) < 2))
		&& ((*b == NULL) || ft_lstsize(*b) < 2))
		return ;
	ra(a, n);
	rb(b, n);
	if (n == 1)
		write(1, "rr\n", 3);
}

void	rrr(t_list **a, t_list **b, int n)
{
	if (((*a == NULL) || (ft_lstsize(*a) < 2))
		&& ((*b == NULL) || ft_lstsize(*b) < 2))
		return ;
	rra(a, n);
	rrb(b, n);
	if (n == 1)
		write(1, "rrr\n", 4);
}
