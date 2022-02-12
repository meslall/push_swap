PUSH_SWAP = push_swap

CHECKER = checker

SRC_P = push_swap.c ft_check.c ft_creation.c ft_quick_sort.c ft_sort1.c ft_sort2.c moves.c moves1.c moves2.c \

SRC_C = checker.c moves.c moves1.c moves2.c ft_check.c ft_creation.c ft_quick_sort.c ft_sort1.c \

CC = @gcc

CFLAGS = -Wall -Wextra -Werror

LIBFT = libft/libft.a

GET_NEXT_LINE = ./get_next_line/get_next_line.c

GET_NEXT_LINE_UTILS = ./get_next_line/get_next_line_utils.c

RM = @rm -f

all:		$(PUSH_SWAP)

$(PUSH_SWAP):
			@cd libft && make && make bonus && cd ..
			$(CC) $(CFLAGS) $(LIBFT) $(SRC_P) -o $(PUSH_SWAP)
			@echo "\033[0;36m®PUSH_SWAP CREATED 💠"

$(CHECKER):
			@cd libft && make && make bonus && cd ..
			$(CC) $(CFLAGS) $(LIBFT) $(SRC_C) $(GET_NEXT_LINE) $(GET_NEXT_LINE_UTILS) -o $(CHECKER)
			@echo "\033[0;36m®CHECKER CREATED 🐲"

clean:
			@cd libft && make clean && cd ..

fclean: 	
			@cd libft && make fclean && cd ..
			$(RM) $(PUSH_SWAP) $(CHECKER)
			@echo "\033[0;31mCHECKER DELETED 🗑"
			@echo "\033[0;31mPUSH_SWAP DELETED 🗑"

re:			fclean all