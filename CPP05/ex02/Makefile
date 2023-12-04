CC = c++
NAME = AForm
CFLAGS = -Wall -Wextra -Werror -g3 -std=c++98

SRC = Bureaucrat.cpp AForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp
INC = Bureaucrat.hpp AForm.hpp

OBJS = ${SRC:.cpp=.o}

%.o: %.cpp
	${CC} ${CFLAGS} -c $< -o $@

all: $(NAME)

$(NAME): ${OBJS} ${INC} main.cpp 
	${CC} main.cpp ${CFLAGS} ${OBJS} -o ${NAME}

clean:
	rm -f $(OBJS) main.o

fclean: clean
	rm -f $(NAME)

re: fclean all
