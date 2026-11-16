CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g

DEBUG_FLAGS = -D DEBUG=1

SRC = main.cpp

HDR = easyfind.hpp

NAME = test

DEBUG_NAME = debug_test

all: $(NAME)

debug : $(DEBUG_NAME)

$(NAME): $(SRC) $(HDR)
	@$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

$(DEBUG_NAME): $(SRC) $(HDR)
	@$(CXX) $(CXXFLAGS) $(DEBUG_FLAGS) $(SRC) -o $(DEBUG_NAME)

clean:
	@rm -f $(NAME)
	@rm -f $(DEBUG_NAME)

fclean: clean
	@rm -f $(NAME)
	@rm -f $(DEBUG_NAME)

re: fclean all

redebug: fclean debug

.PHONY: all debug clean fclean re redebug