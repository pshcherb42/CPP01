# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pshcherb <pshcherb@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/07 20:45:23 by pshcherb          #+#    #+#              #
#    Updated: 2025/07/07 21:05:18 by pshcherb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sed_is_for_losers

SRCS = 	main.cpp \
		sed.cpp \

OBJS = $(SRCS:.cpp=.o)

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS) Makefile sed.hpp
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp 
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean: 
	rm -f $(OBJS) out.txt

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: re clean fclean all