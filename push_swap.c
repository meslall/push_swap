#include <stdio.h>
#include "push_swap.h"
t_list	*push_swap (char **list, int ac)
{
	int i;
	t_list *a;
	t_list *new;

	i = 1;
	a = NULL;
	while (i < ac)
	{
		new = ft_lstnew(ft_atoi(list[i]));
		ft_lstadd_back(&a, new);
		i++;
	}
	return (a);
}
void	sa_sb(t_list *node)
{
	t_list	*first;
	t_list	*second;
	int		temp;

	first = node;
	second = first->next;
	temp = first->content;
	first->content = second->content;
	second->content = temp;
}
void	ra_rb(t_list *node)
{
	t_list	*first;
	t_list	*last;
	int		temp;

	first = node;
	last = first;
	while (last->next != NULL)
	{
		last = last->next;
	}
	temp = last->content;
	last->content = first->content;
	first->content = temp;
}

void	rra_rrb(t_list *node)
{
		t_list	*first;
	t_list	*last;
	int		temp;

	first = node;
	last = first;
	while (last->next != NULL)
	{
		last = last->next;
	}
	temp = first->content;
	first->content = last->content;
	last->content = temp;
}

int main (int ac, char **av)
{
	t_list *head;
	head = push_swap(av, ac);
	sa_sb(head);
	ra_rb(head);
	rra_rrb(head);
	while (head)
	{
		printf("%d\n", head->content);
		head = head->next;
	}

}