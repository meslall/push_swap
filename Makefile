CC = @gcc

CFLAGS = -Wextra -Werror -Wall -g

SRC = push_swap.c ft_check.c ft_creation.c ft_quick_sort.c ft_sort1.c ft_sort2.c moves1.c \

NAME = a.out

LIBFT = libft/libft.a

MKF = @cd libft && make && make bonus && cd ..


RM = @rm -f

CLF = @cd libft && make clean && cd ..

RMF = @cd libft && make fclean && cd ..

all:	$(NAME)

$(NAME):	
			$(MKF)
			$(CC) $(CFLAGS) $(LIBFT) $(SRC) -o $(NAME)

clean: 
		$(CLF)
		$(RM) $(NAME)

fclean: clean 
		$(RMF)
		$(RM) $(NAME) 

re:			fclean all