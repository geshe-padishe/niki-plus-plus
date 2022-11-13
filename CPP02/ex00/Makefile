CC		= c++

NAME	= Fixed

CFLAGS	= -Wall -Wextra -Werror -std=c++98 #-g3 -fsanitize=address

SRC		= Fixed.cpp  Fixed.hpp  main.cpp

all: $(NAME)

$(NAME): ${SRC}
	${CC} ${CFLAGS} ${SRC} -o ${NAME}

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
