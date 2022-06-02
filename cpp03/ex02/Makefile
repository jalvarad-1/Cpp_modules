# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/23 15:51:53 by jalvarad          #+#    #+#              #
#    Updated: 2022/05/27 09:39:19 by jalvarad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= FragTrap

SRCS	= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

OBJS	= $(SRCS:.cpp=.o)

HEADERS = ClapTrap.hpp ScavTrap.hpp

CXFLAGS	= -Wall -Wextra -Werror -fsanitize=address
CXX		= clang++ -std=c++98

OBJS_DIR = ./.obj/

OBJ = $(addprefix $(OBJS_DIR), $(OBJS))

all: create_dir $(NAME)

$(NAME): $(HEADERS) $(OBJ) Makefile
	$(CXX) $(CXFLAGS) $(OBJ) -o $(NAME)

create_dir:
	@mkdir -p $(OBJS_DIR)

$(OBJS_DIR)%.o: %.cpp
	$(CXX) $(CXFLAGS) -o $@ -c $<

clean:
		rm -rf $(OBJS_DIR)

fclean: clean
		rm -rf $(NAME)

re: fclean all

.PHONY: all re clean fclean
