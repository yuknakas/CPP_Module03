# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/31 15:38:10 by yuknakas          #+#    #+#              #
#    Updated: 2026/05/31 17:28:13 by yuknakas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	traps
CPP		=	c++ -Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98

SRCS	=	srcs/ClapTrap.cpp srcs/FragTrap.cpp srcs/ScavTrap.cpp \
			srcs/DiamondTrap.cpp srcs/main.cpp
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
