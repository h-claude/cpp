CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

OBJ = $(SRC:.cpp=.o)

NAME = FragTrap

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	@echo "\033[32mCompiled\033[0m"

re : fclean all

clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)