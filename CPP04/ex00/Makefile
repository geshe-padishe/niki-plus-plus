CC		= c++

NAME	= Animal

CFLAGS	= -Wall -Wextra -Werror -std=c++98 # -g3  -fsanitize=address

SRC		= Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp main.cpp

INC		= Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp

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
