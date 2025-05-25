CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

INC = Harl.hpp

SRC = main.cpp \
		Harl.cpp

NAME = harl

OBJ = ${SRC:.cpp=.o}

all = $(NAME)

$(NAME) : $(OBJ) Makefile
		$(CC) $(OBJ) -o $(NAME)

%.o : %.cpp $(INC) Makefile
		$(CC) $(CFLAGS) -c $< -o $@

clean :
		rm -f $(OBJ)

fclean : clean
		rm -f $(NAME)

re = fclean all

.PHONY = NAME all clean fclean re