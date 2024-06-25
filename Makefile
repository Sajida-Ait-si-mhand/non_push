
NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror 

SRCS = push_swap.c helper.c sort.c push.c \
       rotate.c rrotate.c swap.c join.c helper0.c \
		helper1.c helper2.c split.c big_sort.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

