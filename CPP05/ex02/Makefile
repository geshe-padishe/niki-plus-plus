CC		= c++

NAME	= Aform

CFLAGS	= -Wall -Wextra -Werror -g3 -std=c++98 # -g3  -fsanitize=address

SRC		= Bureaucrat.cpp main.cpp Aform.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm

INC		= Bureaucrat.hpp Aform.hpp

OBJS	= ${SRC:.cpp=.o}

%.o: %.c
	${CC} $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): ${OBJS} ${INC}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
