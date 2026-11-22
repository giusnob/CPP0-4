# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ginobile <ginobile@student.42firenze.it    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/08/22 17:38:24 by ginobile          #+#    #+#              #
#    Updated: 2026/11/22 14:10:30 by ginobile         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= fixed
CXX		= c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS	= main.cpp Fixed.cpp
HEADERS		= Fixed.hpp
OBJS	= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp Fixed.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re