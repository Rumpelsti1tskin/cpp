CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp

NAME = brain

OBJ = ${SRC:.cpp=.o}

all: $(NAME)

$(NAME) : $(OBJ) Makefile
		$(CC) $(OBJ) -o $(NAME)

%.cpp : %.o Makefile
		$(CC) $(CFLAGS) -c $< -o $@

clean :
		rm -f $(OBJ)

fclean : clean
		rm -f $(NAME)

re : fclean all

.PHONY : NAME all clean fclean re

