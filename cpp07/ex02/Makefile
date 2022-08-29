# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/28 16:46:04 by jalvarad          #+#    #+#              #
#    Updated: 2022/08/29 17:27:58 by jalvarad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	= array

SRCS	= main.cpp

OBJS	= $(SRCS:.cpp=.o)

HEADERS = Array.hpp

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
