CC = @gcc

CFLAGS = -Wextra -Werror -Wall -g

SRC = push_swap.c

NAME = a.out

LIBFT = libft/libft.a

MKF = @cd libft && make && make bonus && cd ..


RM = @rm -f


all:	$(NAME)

$(NAME):	
			$(MKF)
			$(CC) $(CFLAGS) $(LIBFT) $(SRC) -o $(NAME)

clean: 
		@cd libft && make clean && cd ..
		$(RM) $(NAME)

fclean: clean 
		$(RM) $(NAME)

re:			fclean all