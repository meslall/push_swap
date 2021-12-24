#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include<unistd.h>
# include<stdlib.h>
# include<string.h>
# include "./libft/libft.h"

void	sa_sb(t_list **node);
void	rra_rrb(t_list **node);
void	ra_rb(t_list **node);
void pa_pb(t_list **dest , t_list **src);

#endif