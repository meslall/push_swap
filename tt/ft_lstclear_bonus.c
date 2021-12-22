/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeslall <omeslall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 00:22:40 by omeslall          #+#    #+#             */
/*   Updated: 2021/12/20 18:30:57 by omeslall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include"libft.h"

// void	ft_lstclear(t_list **lst, void (*del)(void*))
// {
// 	t_list	*temp;

// 	temp = *lst;
// 	while (*lst != NULL)
// 	{
// 		*lst = (*lst)->next;
// 		del(temp->content);
// 		free(temp);
// 		temp = *lst;
// 	}
// 	*lst = NULL;
// }
// void dell(void *b)
// {
// 	free(b);

// }

// int main()
// {
// 	t_list *new= malloc(sizeof(t_list));
// 	char *s=malloc(5);
// 	new->content=s;
// 	new->next =NULL;
// 	printf("%p\n",new);
// 	ft_lstclear(&new, dell);
// 	printf("%p\n",new);
// 	return(0);
// }