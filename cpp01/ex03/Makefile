# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/05 15:30:33 by jalvarad          #+#    #+#              #
#    Updated: 2022/05/19 16:54:24 by jalvarad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Violence

SRCS	= HumanA.cpp\
			HumanB.cpp\
			Weapon.cpp\
			main.cpp\

HEADERS = HumanA.hpp HumanB.hpp Weapon.hpp

OBJS	= $(SRCS:.cpp=.o)

CXFLAGS	= -Wall -Wextra -Werror
CXX		= clang++ --std=c++98

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
