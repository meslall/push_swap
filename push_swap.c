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

int main (int ac, char **av)
{
	t_list *head;
	t_list *b = NULL;
	head = push_swap(av, ac);
	sa_sb(&head);
	ra_rb(&head);
	rra_rrb(&head);
	pa_pb(&b,&head);
	while (head)
	{
		printf("%d\n", head->content);
		head = head->next;
	}
	printf("---");
	while (b)
	{
		printf("\n%d", b->content);
		b = b->next;
	}
	
}