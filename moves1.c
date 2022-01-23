#include"push_swap.h"

void	sa(t_list **a, int n)
{
	t_list	*temp;

	if (*a == NULL)
		return ;
	temp = *a;
	(*a) = (*a)->next;
	temp->next = (*a)->next;
	(*a)->next = temp;
	if (n == 1)
		write(1, "sa\n", 3);
}