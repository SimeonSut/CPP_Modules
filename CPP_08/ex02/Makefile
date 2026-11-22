CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g

DEBUG_FLAGS = -D DEBUG=1

TEST_FLAGS = -D TESTFLAG=1

SRC = main.cpp

TEST_SRC = main.cpp 

HDR = MutantStack.hpp

NAME = Test

DEBUG_NAME = debug_test

TEST_NAME = $(notdir$(shell pwd))

all: $(NAME)

debug : $(DEBUG_NAME)

test : $(TEST_NAME)

$(NAME): $(SRC) $(HDR)
	@$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

$(DEBUG_NAME): $(SRC) $(HDR)
	@$(CXX) $(CXXFLAGS) $(DEBUG_FLAGS) $(SRC) -o $(DEBUG_NAME)

$(TEST_NAME) : $(TEST_SRC)
	@$(CXX) $(CXXFLAGS) $(TEST_FLAG) $(TEST_SRC)  -o $(TEST_NAME)

clean:
	@rm -f $(NAME)
	@rm -f $(DEBUG_NAME)
	@rm -f $(TEST_NAME)

fclean: clean
	@rm -f $(NAME)
	@rm -f $(DEBUG_NAME)
	@rm -f $(TEST_NAME)

re: fclean all

redebug: fclean debug

retest: fclean test

.PHONY: all debug test clean fclean re redebug retest