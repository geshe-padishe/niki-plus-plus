CC		= c++

NAME	= Useful_Fixed

CFLAGS	= -Wall -Wextra -Werror -std=c++98 -g3 # -fsanitize=address

SRC		= Fixed.cpp  Point.cpp main.cpp bsp.cpp

all: $(NAME)

$(NAME): ${SRC}
	${CC} ${CFLAGS} ${SRC} -o ${NAME}

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
