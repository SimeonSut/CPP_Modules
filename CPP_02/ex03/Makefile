CC = c++

FLAGS = -Wall -Wextra -Werror -g -std=c++98

SRC = main.cpp Fixed.cpp Point.cpp

HDR = Fixed.hpp Point.hpp

NAME = Point

all: $(NAME)

$(NAME): $(SRC) $(HDR)
	@$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@rm -f $(NAME)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re