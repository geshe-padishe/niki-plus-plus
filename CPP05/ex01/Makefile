CC		= c++

NAME	= Form

CFLAGS	= -Wall -Wextra -Werror -std=c++98 # -g3  -fsanitize=address

SRC		= Bureaucrat.cpp main.cpp Form.cpp

INC		= Bureaucrat.hpp

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
