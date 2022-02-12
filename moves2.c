/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeslall <omeslall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 01:00:02 by omeslall          #+#    #+#             */
/*   Updated: 2022/02/12 01:04:38 by omeslall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ss(t_list **a, t_list **b, int n)
{
	if (((*a == NULL) || (ft_lstsize(*a) < 2))
		&& ((*b == NULL) || ft_lstsize(*b) < 2))
		return ;
	sa(a, n);
	sb(b, n);
	if (n == 1)
		write(1, "ss\n", 3);
}