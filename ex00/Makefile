SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp
OBJS = $(SRCS:.cpp=.o)
HDRS = Animal.hpp Cat.hpp Dog.hpp
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = fragtrap

all: $(NAME)

$(NAME): $(OBJS) $(HDRS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re