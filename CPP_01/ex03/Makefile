CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

HDR = HumanA.hpp HumanB.hpp Weapon.hpp

NAME = test

all: $(NAME)

$(NAME): $(SRC) $(HDR)
	@$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re