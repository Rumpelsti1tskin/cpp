CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = megaphone.cpp
OBJ = ${SRC:.cpp=.o}

NAME = megaphone

all: $(NAME)

$(NAME) : $(OBJ) Makefile
		$(CC) $(OBJ) -o $(NAME)

%.o : %.cpp Makefile
		$(CC) $(CFLAGS) -c $< -o $@

clean :
		rm -f $(OBJ)

fclean : clean
		rm -f $(NAME)

re : fclean all

.PHONY : NAME all clean fclean re