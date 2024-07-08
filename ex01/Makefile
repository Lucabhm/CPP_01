NAME = zombie
CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98
SRCS = main.cpp \
		Zombie.cpp \
		zombieHorde.cpp
OBJS = $(SRCS:.cpp=.o)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

all:		$(NAME)

clean:
			rm -f *.o

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.Phony:		all clean fclean re