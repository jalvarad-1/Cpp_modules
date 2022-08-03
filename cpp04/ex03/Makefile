# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/24 12:39:03 by jalvarad          #+#    #+#              #
#    Updated: 2022/08/03 18:18:42 by jalvarad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= InterfaceRecap

SRCS	= AMateria.cpp Ice.cpp Cure.cpp Character.cpp MateriaSource.cpp

OBJS	= $(SRCS:.cpp=.o)

HEADERS = AMateria.hpp

CXFLAGS	= -Wall -Wextra -Werror #-fsanitize=address
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
