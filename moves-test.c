/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves-test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeslall <omeslall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:49:12 by omeslall          #+#    #+#             */
/*   Updated: 2022/01/31 16:49:13 by omeslall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa_sb(t_list **node)
{
	t_list	*first;
	t_list	*second;
	int		temp;

	first = *node;
	second = first->next;
	temp = first->content;
	first->content = second->content;
	second->content = temp;
}
void	rra_rrb(t_list **node)
{
	t_list	*first;
	t_list	*last;
	t_list	*n_f;

	first = *node;
	last = first;
	while (last->next->next != NULL)
	{
		last = last->next;
	}
	n_f = last->next;
	n_f->next = first;
	*node = n_f;
	last->next = NULL;	
}

void	ra_rb(t_list **node)
{
	t_list	*first;
	t_list	*last;
	
	first = *node;
	last = first;
	while (last->next != NULL)
	{
		last = last->next;
	}
	*node = first->next;
	last->next = first;
	first->next = NULL;
}
void pa_pb(t_list **dest , t_list **src)
{
    if (*src == NULL) {
        return;
    }
 
    t_list	*newNode = *src;
    *src = (*src)->next;
    newNode->next = *dest;
    *dest = newNode;
}