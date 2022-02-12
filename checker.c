/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeslall <omeslall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 22:48:57 by omeslall          #+#    #+#             */
/*   Updated: 2022/02/12 00:16:37 by omeslall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	check_moves(t_list **a, t_list **b, t_data **data, char *move)
{
	if (ft_strncmp("sa\n", move, 3) == 0)
		sa(a, 0);
	else if (ft_strncmp("sb\n", move, 3) == 0)
		sb(b, 0);
	else if (ft_strncmp("ss\n", move, 3) == 0)
		ss(a, b, 0);
	else if (ft_strncmp("pa\n", move, 3) == 0)
		pa(a, b, 0);
	else if (ft_strncmp("pb\n", move, 3) == 0)
		pb(a, b, 0);
	else if (ft_strncmp("ra\n", move, 3) == 0)
		ra(a, 0);
	else if (ft_strncmp("rb\n", move, 3) == 0)
		rb(b, 0);
	else if (ft_strncmp("rr\n", move, 3) == 0)
		rr(a, b, 0);
	else if (ft_strncmp("rra\n", move, 4) == 0)
		rra(a, 0);
	else if (ft_strncmp("rrb\n", move, 4) == 0)
		rrb(b, 0);
	else if (ft_strncmp("rrr\n", move, 4) == 0)
		rrr(a, b, 0);
	else
		tf_free(*a, *b, *data, 1);
}

void	help_check(t_list **a, t_list **b, t_data **data)
{
	int		*arr;
	t_list	*temp;
	int		i;

	i = 0;
	temp = (*a);
	arr = malloc(ft_lstsize(*a) * sizeof(int));
	while (temp)
	{
		arr[i] = temp->content;
		temp = temp->next;
		i++;
	}
	ft_quick_sort(arr, 0, ft_lstsize(*a) - 1);
	if (!ft_duplicate(arr, ft_lstsize(*a) - 1))
		tf_free(*a,*b,*data, 1);
	free (arr);
}

void	ft_checker(t_list **a, t_list **b, t_data **data)
{
	char	*move;

	move = NULL;
	help_check (a, b, data);
	move = get_next_line(0);
	while (move)
	{
		check_moves(a, b, data, move);
		free(move);
		move = NULL;
		move = get_next_line(0);
	}
	if (ft_stack_sorted (a) && *b == NULL)
		write (1, "OK\n", 3);
	else
		write (1, "KO\n", 3);
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
		ft_putstr_fd("Error\n", 1);
		return (0);
	}
	if (!ft_value(ac, av))
		return (0);
	b = NULL;
	a = ft_stack(ac, av);
	data = ft_data();
	ft_checker(&a, &b, &data);
}
