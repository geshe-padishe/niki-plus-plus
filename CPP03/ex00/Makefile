CC		= c++

NAME	= ClapTrap

CFLAGS	= -Wall -Wextra -Werror -std=c++98 -g3 # -fsanitize=address

SRC		= ClapTrap.cpp main.cpp

all: $(NAME)

$(NAME): ${SRC}
	${CC} ${CFLAGS} ${SRC} -o ${NAME}

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
