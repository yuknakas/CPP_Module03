# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/31 15:10:40 by yuknakas          #+#    #+#              #
#    Updated: 2026/07/06 17:17:52 by yuknakas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	traps
CPP		=	c++ -Wall -Wextra -Werror -std=c++98 -pedantic

SRCS	=	srcs/ClapTrap.cpp srcs/ScavTrap.cpp srcs/main.cpp
OBJS	=	$(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CPP) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
