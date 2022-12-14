CC		= c++

NAME	= HI_THIS_IS_BRAIN

CFLAGS	= -Wall -Wextra -Werror -std=c++98 #-g3 -fsanitize=address

SRC		= main.cpp

all: $(NAME)

$(NAME): ${SRC}
	${CC} ${CFLAGS} ${SRC} -o ${NAME}

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
