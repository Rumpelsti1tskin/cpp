CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

INC = Fixed.hpp \
		Point.hpp

SRC = main.cpp \
		Fixed.cpp \
		Point.cpp \
		bsp.cpp

OBJ = ${SRC:.cpp=.o}

NAME = fixed

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