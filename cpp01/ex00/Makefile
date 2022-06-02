# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/05 10:08:37 by jalvarad          #+#    #+#              #
#    Updated: 2022/05/19 16:23:34 by jalvarad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= BraiiiiiiinnnzzzZ

SRCS	= main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

OBJS	= $(SRCS:.cpp=.o)

HEADERS = Zombie.hpp

CXFLAGS	= -Wall -Wextra -Werror
CXX		= clang++ --std=c++98

OBJS_DIR = ./.obj/

OBJ = $(addprefix $(OBJS_DIR), $(OBJS))

all: create_dir $(NAME)

$(NAME): $(OBJ) $(HEADERS) Makefile
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
