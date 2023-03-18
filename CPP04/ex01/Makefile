CC		= c++

NAME	= Animal

CFLAGS	= -Wall -Wextra -Werror -std=c++98 # -g3  -fsanitize=address

SRC		= Brain.cpp Animal.cpp Dog.cpp Cat.cpp main.cpp

INC		= Animal.hpp Cat.hpp Dog.hpp Brain.hpp
OBJS	= ${SRC:.cpp=.o}

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): ${OBJS} ${INC}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
