/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeslall <omeslall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:45:45 by omeslall          #+#    #+#             */
/*   Updated: 2022/01/31 16:45:46 by omeslall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"
void	ft_sort(t_list **a, t_list **b, t_data **data, int argc)
{
	ft_stack_data(a, data);
	(*data)->main_min = (*data)->min;
	if (argc <= 3)
		sa(a,  1);
	else if (argc <= 4)
		ft_sort_three(a);
	else if (argc <= 5)
		ft_sort_four(a, b, data);
	else if (argc <= 6)
		ft_sort_five(a, b, data);
	else 
		ft_large_sort(a, b, data);
}

void	ft_main(t_list **a, t_list **b, t_data **data, int ac)
{
	ft_index(a, b, data);
	if (ac == 2 || ft_stack_sorted(a))
		ft_free(*a, *b, *data, 0);
	ft_sort(a, b, data, ac);
}

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;
	t_data	*data;

	if (ac < 2)
		exit(1);
	if (!ft_check(ac, av))
	{
		ft_putstr_fd("Error\n",1);
		return (0);
	}
	if (!ft_value(ac, av))
		return (0);
	b = NULL;
	a = ft_stack(ac, av);
	data = ft_data();
 	ft_main(&a, &b, &data, ac);
	ft_error(a, b, data, 0);
	return (0);
}
