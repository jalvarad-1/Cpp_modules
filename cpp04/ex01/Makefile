# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/02 14:33:19 by jalvarad          #+#    #+#              #
#    Updated: 2022/08/07 12:12:20 by jalvarad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= WorldOnFire

SRCS	= main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp

OBJS	= $(SRCS:.cpp=.o)

HEADERS = Animal.hpp Cat.hpp Dog.hpp Brain.hpp

CXFLAGS	= -Wall -Wextra -Werror #-fsanitize=address
CXX		= clang++ -std=c++98

OBJS_DIR = ./.obj/

OBJ = $(addprefix $(OBJS_DIR), $(OBJS))

all: Makefile $(HEADERS) create_dir $(NAME)  

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
