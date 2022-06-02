# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/04 09:57:52 by jalvarad          #+#    #+#              #
#    Updated: 2022/05/04 16:51:10 by jalvarad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Program name
NAME	= accounts_displayer

#Sources 
SRCS	= tests.cpp Account.cpp

#Objects
OBJS	= $(SRCS:.cpp=.o)

#Flags
CXFLAGS	= -Wall -Wextra -Werror -fsanitize=address
CXX		= clang++

#Folders
OBJS_DIR = ./.obj/

#Paths
OBJ = $(addprefix $(OBJS_DIR), $(OBJS))

all: create_dir $(NAME)

$(NAME): $(OBJ) Makefile
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
