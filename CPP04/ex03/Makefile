CC		= c++

NAME	= Animal

CFLAGS	= -Wall -Wextra -Werror -I -std=c++98 -g3 # -fsanitize=address

SRC		= main.cpp AMateria.cpp Character.cpp MateriaSource.cpp Ice.cpp Cure.cpp

all: $(NAME)

$(NAME): ${SRC}
	${CC} ${CFLAGS} ${SRC} -o ${NAME}

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
