# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ginobile <ginobile@student.42firenze.it    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/08/22 17:38:24 by ginobile          #+#    #+#              #
#    Updated: 2026/11/22 15:18:42 by ginobile         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= claptrap
CXX		= c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS	= main.cpp ClapTrap.cpp
HEADERS		= ClapTrap.hpp
OBJS	= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp ClapTrap.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re