CC		= c++

NAME	= Warcraft

CFLAGS	= -Wall -Wextra -Werror -std=c++98 # -g3  -fsanitize=address

SRC		= AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp main.cpp

INC		= Ice.hpp Cure.hpp MateriaSource.hpp IMateriaSource.hpp ICharacter.hpp Character.hpp AMateria.hpp

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
