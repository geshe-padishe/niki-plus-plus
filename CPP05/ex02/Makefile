CC = c++
NAME = Aform
CFLAGS = -Wall -Wextra -Werror -g3 -std=c++98

SRC = Bureaucrat.cpp Aform.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp
INC = Bureaucrat.hpp Aform.hpp

OBJS = ${SRC:.cpp=.o}

%.o: %.cpp
	${CC} ${CFLAGS} -c $< -o $@

all: $(NAME)

$(NAME): ${OBJS} ${INC}
	${CC} main.cpp ${CFLAGS} ${OBJS} -o ${NAME}

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
