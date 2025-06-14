CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

INC = Animal.hpp \
		Dog.hpp \
		Cat.hpp \
		WrongCat.hpp \
		WrongAnimal.hpp \
		Brain.hpp

SRC = main.cpp \
		Animal.cpp \
		Dog.cpp \
		Cat.cpp \
		WrongAnimal.cpp \
		WrongCat.cpp \
		Brain.cpp

OBJ = ${SRC:.cpp=.o}

NAME = polymorphism

all: $(NAME)

$(NAME) : $(OBJ) $(INC) Makefile
		$(CC) $(OBJ) -o $(NAME)

%.o : %.cpp $(INC) Makefile
		$(CC) $(CFLAGS) -c $< -o $@

clean :
		rm -f $(OBJ)

fclean : clean
		rm -f $(NAME)

re : fclean all

.PHONY : NAME all clean fclean re