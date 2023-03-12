CC		= c++

NAME	= Animal

CFLAGS	= -Wall -Wextra -Werror -std=c++98 -g3 # -fsanitize=address

SRC		= AAnimal.cpp Dog.cpp Cat.cpp Brain.cpp main.cpp

all: $(NAME)

$(NAME): ${SRC}
	${CC} ${CFLAGS} ${SRC} -o ${NAME}

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
