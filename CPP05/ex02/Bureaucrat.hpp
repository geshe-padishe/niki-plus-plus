#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <stdexcept>
#include <string>
#include <iostream>
#include "Aform.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Aform;

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat( Bureaucrat const & src );
		Bureaucrat( std::string, unsigned int );
		~Bureaucrat();
		std::string getName() const;
		int getGrade() const;
		void increaseGrade();
		void decreaseGrade();
		bool signform( Aform &f );
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
		std::string name;
		int grade;

};

std::ostream&			operator<<( std::ostream &o, Bureaucrat const &i );

#endif /* ****************************************************** BUREAUCRAT_H */