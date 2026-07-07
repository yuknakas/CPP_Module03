# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/31 14:50:28 by yuknakas          #+#    #+#              #
#    Updated: 2026/07/07 17:11:17 by yuknakas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	traps

CPP		=	c++ -Wall -Wextra -Werror -std=c++98 -pedantic
SRCS	=	srcs/ClapTrap.cpp srcs/main.cpp
OBJS	=	$(SRCS:.cpp=.o)
DEPS	=	$(OBJS:.o=.d)

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CPP) -MMD -MF"$(@:%.o=%.d)" -c $< -o $@

clean:
	rm -f $(OBJS) $(DEPS)

fclean: clean
	rm -f $(NAME)

re: fclean all

-include $(DEPS)

.PHONY: all clean fclean re
