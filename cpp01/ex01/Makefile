CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

INC = Zombie.hpp

SRC = main.cpp \
		Zombie.cpp \
		zombieHorde.cpp

OBJ = ${SRC:.cpp=.o}

NAME = zombieHorde

all: $(NAME)

$(NAME) : $(OBJ) Makefile
		$(CC) $(OBJ) -o $(NAME)

%.o : %.cpp $(INC) Makefile
		$(CC) $(CFLAGS) -c $< -o $@

clean :
		rm -f $(OBJ)

fclean : clean
		rm -f $(NAME)

re : fclean all

.PHONY : NAME all clean fclean re