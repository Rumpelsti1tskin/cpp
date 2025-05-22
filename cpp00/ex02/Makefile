CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

INC = Account.hpp

SRC = Account.cpp \
		tests.cpp

OBJ = ${SRC:.cpp=.o}

NAME = Account

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