# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: caunhach <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/04 20:54:36 by caunhach          #+#    #+#              #
#    Updated: 2023/12/04 20:54:38 by caunhach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp AMateria.cpp Cure.cpp Ice.cpp Character.cpp MateriaSource.cpp
OBJS = $(SRCS:.cpp=.o)
HDRS = AMateria.hpp Cure.hpp Ice.hpp ICharacter.hpp Character.hpp MateriaSource.hpp IMateriaSource.hpp
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = materia

all: $(NAME)

$(NAME): $(OBJS) $(HDRS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
