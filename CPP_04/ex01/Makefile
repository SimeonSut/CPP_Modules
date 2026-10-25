CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 -g

DEBUG_FLAGS = -D DEBUG=1

SRC = Animal.cpp Cat.cpp Dog.cpp main.cpp

HDR = Animal.hpp Cat.hpp Dog.hpp

NAME = test

DEBUG_NAME = debug_test

all: $(NAME)

debug : $(DEBUG_NAME)

$(NAME): $(SRC) $(HDR)
	@$(CC) $(FLAGS) $(SRC) -o $(NAME)

$(DEBUG_NAME): $(SRC) $(HDR)
	@$(CC) $(FLAGS) $(DEBUG_FLAGS) $(SRC) -o $(DEBUG_NAME)

clean:
	@rm -f $(NAME)
	@rm -f $(DEBUG_NAME)

fclean: clean
	@rm -f $(NAME)
	@rm -f $(DEBUG_NAME)

re: fclean all

redebug: fclean debug

.PHONY: all debug clean fclean re redebug