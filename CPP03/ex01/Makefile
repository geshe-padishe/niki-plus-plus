CC		= c++

NAME	= ScavTrap

CFLAGS	= -Wall -Wextra -Werror -std=c++98 -g3 # -fsanitize=address

SRC		= ScavTrap.cpp ClapTrap.cpp main.cpp

all: $(NAME)

$(NAME): ${SRC} ClapTrap.hpp ScavTrap.hpp
	${CC} ${CFLAGS} ${SRC} -o ${NAME}

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
