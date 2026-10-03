CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = Test.cpp main.cpp

HDR = Test.hpp

NAME = Test

all: $(NAME)

$(NAME): $(SRC) $(HDR)
	@$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re