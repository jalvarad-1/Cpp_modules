# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/28 14:29:11 by jalvarad          #+#    #+#              #
#    Updated: 2022/08/28 15:09:10 by jalvarad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= whatever

SRCS	= main.cpp

OBJS	= $(SRCS:.cpp=.o)

HEADERS = whatever.hpp

CXFLAGS	= -Wall -Wextra -Werror #-fsanitize=address
CXX		= clang++ -std=c++98

OBJS_DIR = ./.obj/

OBJ = $(addprefix $(OBJS_DIR), $(OBJS))

all: $(NAME)

$(NAME): Makefile $(HEADERS) $(OBJS_DIR) $(OBJ) 
	$(CXX) $(CXFLAGS) $(OBJ) -o $(NAME)

$(OBJS_DIR):
	@mkdir -p $(OBJS_DIR)

$(OBJS_DIR)%.o: %.cpp $(HEADERS)
	$(CXX) $(CXFLAGS) -o $@ -c $<

clean:
		rm -rf $(OBJS_DIR)

fclean: clean
		rm -rf $(NAME)

re: fclean all

.PHONY: all re clean fclean