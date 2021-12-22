NAME	= libft.a

SRCS	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			ft_tolower.c ft_toupper.c  ft_atoi.c ft_itoa.c ft_calloc.c \
			ft_memset.c ft_bzero.c ft_memcpy.c ft_memcpy.c ft_memmove.c \
			ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c \
			ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_substr.c \
			ft_strdup.c ft_strjoin.c ft_strtrim.c ft_split.c ft_strmapi.c \
			ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \

OBJS	= $(SRCS:.c=.o)

BONUS_S	= ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
			ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

BONUS_O	= $(BONUS_S:.c=.o)

ICLS	= libft.h

CC		= @gcc -c

CFLAGS	= -Wall -Wextra -Werror

AR	= @ar -rcs

RM		= @rm -f


all:		$(NAME)

$(NAME):	$(OBJS)
			$(AR) $(NAME) $(OBJS)
			@echo "LIBFT CREATED !"

bonus:	$(BONUS_O)

$(BONUS_O) : $(BONUS_S)
			$(CC) $(CFLAGS) $(BONUS_S)
			$(AR) $(NAME) $(BONUS_O)
			@echo "BONUS CREATED !"


clean:
			$(RM) $(OBJS) $(BONUS_O)
			@echo "Objects Deleted!"

fclean:		clean
			$(RM) $(NAME)
			@echo "Project File Deleted!"

re:			fclean all

rebonus : fclean bonus
.PHONY:		all bonus clean fclean re