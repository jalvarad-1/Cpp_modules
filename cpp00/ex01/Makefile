# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/18 14:40:31 by jalvarad          #+#    #+#              #
#    Updated: 2022/05/04 09:58:04 by jalvarad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Program name
NAME	= Contacts

#Sources 
SRCS	= main.cpp contact.class.cpp phonebook.class.cpp

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
