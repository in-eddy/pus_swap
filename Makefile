CC = cc 
CFLAGS = -Wall -Wextra -Werror
SRC=ft_strdup.c help_main.c operation3.c parssing.c ft_atoi.c ft_strjoin.c operation.c  operation4.c parssing2.c \
	sort.c ft_split.c ft_strlen.c operation2.c operation5.c push_swap.c sort2.c
OBJ = $(SRC:.c=.o)

NAME = push_swap

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@

%.o : %.c push_swap.h
	$(CC) $(CFLAGS) -c $< -o $@

clean : 
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

