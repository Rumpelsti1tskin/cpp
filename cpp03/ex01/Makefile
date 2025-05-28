CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

INC = ClapTrap.hpp \
		ScavTrap.hpp

SRC = main.cpp \
		ClapTrap.cpp \
		ScavTrap.cpp

OBJ = ${SRC:.cpp=.o}

NAME = scav_trap

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