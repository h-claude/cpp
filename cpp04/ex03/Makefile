CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -Iinclude/ -g3

SRC = main.cpp AMateria.cpp Ice.cpp Cure.cpp Character.cpp MateriaSource.cpp

OBJ = $(SRC:.cpp=.o)

NAME = Materia

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	@echo "\033[32mCompiled\033[0m"

re : fclean all

clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)