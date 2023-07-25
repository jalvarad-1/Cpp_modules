# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/25 18:41:28 by jalvarad          #+#    #+#              #
#    Updated: 2023/07/25 18:44:39 by jalvarad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= btc

SRCS	= main.cpp BitcoinExchange.cpp

OBJS	= $(SRCS:.cpp=.o)

HEADERS = BitcoinExchange.hpp

CXFLAGS	= -Wall -Wextra -Werror -pedantic #-fsanitize=address
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