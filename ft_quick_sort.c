/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quick_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeslall <omeslall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:45:08 by omeslall          #+#    #+#             */
/*   Updated: 2022/02/12 01:14:20 by omeslall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"
#include"./libft/libft.h"

void	ft_quick_sort(int *arr, int start, int end)
{
	int	n;

	if (start < end)
	{
		n = ft_partition(arr, start, end);
		ft_quick_sort(arr, start, n - 1);
		ft_quick_sort(arr, n + 1, end);
	}
}

int	ft_partition(int *arr, int start, int end)
{
	int	temp;
	int	comp;
	int	i;
	int	j;

	comp = arr[end];
	i = start - 1;
	j = start;
	while (j < end)
	{
		if (arr[j] <= comp)
		{
			i++;
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
		j++;
	}
	temp = arr[i + 1];
	arr[i + 1] = arr[end];
	arr[end] = temp;
	return (i + 1);
}

int	ft_duplicate(int *arr, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (arr[i] == arr[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void	ft_position(t_list **lst, int *arr)
{
	t_list	*temp;
	int		i;

	temp = (*lst);
	while (temp)
	{
		i = 0;
		while (arr[i] != temp->content)
			i++;
		temp->index = i;
		temp = temp->next;
	}
}

void	ft_index(t_list **a, t_list **b, t_data **data)
{
	t_list	*temp;
	int		*arr;
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
	ft_position(a, arr);
	free(arr);
}
