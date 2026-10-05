CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = Test.cpp main.cpp

SINGULAR_SRC = Singular_test.cpp

HDR = Test.hpp

NAME = Test

all: $(NAME)

$(NAME): $(SRC) $(HDR)
	@$(CC) $(FLAGS) $(SRC) -o $(NAME)

one: $(SINGULAR_SRC)
	@$(CC) $(FLAGS) $(SINGULAR_SRC) -o one_test

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)
	@rm -f one_test

re: fclean all

re_one: fclean one

.PHONY: all clean fclean re