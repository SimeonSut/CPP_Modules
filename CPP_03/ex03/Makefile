CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

DEBUG_FLAGS = -D DEBUG=1

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

HDR = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp

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

.PHONY: all clean fclean re redebug