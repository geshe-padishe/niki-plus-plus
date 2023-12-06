#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <fstream>
#include <stdexcept>
#include <string>
#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class AForm;

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat( Bureaucrat const & src );
		Bureaucrat( std::string, unsigned int );
		~Bureaucrat();
		std::string	getName() const;
		int			getGrade() const;
		void		increaseGrade();
		void		decreaseGrade();
		void		signForm( AForm &f );
		void		executeForm(AForm const & form);
		Bureaucrat &		operator=( Bureaucrat const & rhs );
		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

	private:
		const std::string name;
		int grade;

};

std::ostream&			operator<<( std::ostream &o, Bureaucrat const &i );

#endif /* ****************************************************** BUREAUCRAT_H */