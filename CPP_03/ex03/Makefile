CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

HDR = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp

NAME = test

all: $(NAME)

$(NAME): $(SRC) $(HDR)
	@$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@rm -f $(NAME)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re