CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = Acoount.cpp Contact.cpp main.cpp

HDR = PhoneBook.hpp

NAME = PhoneBook

all: $(NAME)

$(NAME): $(SRC) $(HDR)
	@$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re