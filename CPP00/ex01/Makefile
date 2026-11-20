# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ginobile <ginobile@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/08/22 17:38:24 by ginobile          #+#    #+#              #
#    Updated: 2026/08/22 20:11:29 by ginobile         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= phonebook
CXX		= c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS	= main.cpp phonebook.cpp contact.cpp
OBJS	= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re