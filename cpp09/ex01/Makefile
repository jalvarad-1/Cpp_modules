
NAME	= RPN

SRCS	= main.cpp RPN.cpp

OBJS	= $(SRCS:.cpp=.o)

HEADERS = RPN.hpp

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
