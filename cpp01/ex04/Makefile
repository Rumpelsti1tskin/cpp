CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = file_replace

SRC = main.cpp

OBJ = ${SRC:.cpp=.o}

all = $(NAME)

$(NAME) : $(OBJ) Makefile
		$(CC) $(OBJ) -o $(NAME)

%.o : %.cpp $(OBJ) Makefile
		$(CC) $(CFLAGS) -c $< -o $@

clean :
		rm -f $(OBJ)

fclean : clean
		rm -f $(NAME)

re : fclean all

.PHONY = NAME all clean fclean re

