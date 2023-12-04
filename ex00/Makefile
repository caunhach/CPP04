# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: caunhach <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/04 15:45:55 by caunhach          #+#    #+#              #
#    Updated: 2023/12/04 15:45:57 by caunhach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp
OBJS = $(SRCS:.cpp=.o)
HDRS = Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = polymorphism

all: $(NAME)

$(NAME): $(OBJS) $(HDRS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
