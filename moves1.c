/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeslall <omeslall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:45:40 by omeslall          #+#    #+#             */
/*   Updated: 2022/02/12 01:14:39 by omeslall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	sa(t_list **a, int n)
{
	t_list	*temp;

	if ((*a == NULL) || ft_lstsize(*a) < 2)
		return ;
	temp = *a;
	(*a) = (*a)->next;
	temp->next = (*a)->next;
	(*a)->next = temp;
	if (n == 1)
		write(1, "sa\n", 3);
}

void	sb(t_list **b, int n)
{
	t_list	*temp;

	if (*b == NULL || ft_lstsize(*b) < 2)
		return ;
	temp = *b;
	(*b) = (*b)->next;
	temp->next = (*b)->next;
	(*b)->next = temp;
	if (n == 1)
		write(1, "sb\n", 3);
}

void	ra(t_list **a, int n)
{
	t_list	*first;
	t_list	*last;

	if ((*a == NULL) || ft_lstsize(*a) < 2)
		return ;
	first = *a;
	last = ft_lstlast(first);
	*a = first->next;
	last->next = first;
	first->next = NULL;
	if (n == 1)
		write(1, "ra\n", 3);
}

void	rra(t_list **a, int n)
{
	t_list	*first;
	t_list	*last;
	t_list	*n_f;

	if ((*a == NULL) || ft_lstsize(*a) < 2)
		return ;
	first = *a;
	last = first;
	while (last->next->next != NULL)
		last = last->next;
	n_f = last->next;
	n_f->next = first;
	*a = n_f;
	last->next = NULL;
	if (n == 1)
		write(1, "rra\n", 4);
}

void	pb(t_list **a, t_list **b, int n)
{
	t_list	*node;

	if (*a == NULL)
		return ;
	node = *a;
	*a = (*a)->next;
	node->next = *b;
	*b = node;
	if (n == 1)
		write(1, "pb\n", 3);
}
