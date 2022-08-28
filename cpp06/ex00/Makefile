# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/14 11:02:55 by jalvarad          #+#    #+#              #
#    Updated: 2022/08/27 10:48:19 by jalvarad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= convert

SRCS	= main.cpp Convert.cpp

OBJS	= $(SRCS:.cpp=.o)

HEADERS = Convert.hpp

CXFLAGS	= -Wall -Wextra -Werror #-fsanitize=address
CXX		= clang++ -std=c++98

OBJS_DIR = ./.obj/

OBJ = $(addprefix $(OBJS_DIR), $(OBJS))

all: Makefile $(HEADERS) $(OBJS_DIR) $(NAME)

$(NAME): Makefile $(HEADERS) $(OBJS_DIR) $(OBJ) 
	$(CXX) $(CXFLAGS) $(OBJ) -o $(NAME)

$(OBJS_DIR):
	@mkdir -p $(OBJS_DIR)

$(OBJS_DIR)%.o: %.cpp
	$(CXX) $(CXFLAGS) -o $@ -c $<

clean:
		rm -rf $(OBJS_DIR)

fclean: clean
		rm -rf $(NAME)

re: fclean all

.PHONY: all re clean fclean
