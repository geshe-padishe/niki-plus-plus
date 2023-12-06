#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <stdexcept>
#include <string>
#include <iostream>
#include "Form.hpp"

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat( Bureaucrat const & src );
		Bureaucrat( std::string, unsigned int );
		~Bureaucrat();
		std::string getName() const;
		unsigned int getGrade() const;
		void increaseGrade();
		void decreaseGrade();
		bool signForm( Form &f );
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
		unsigned int grade;

};

std::ostream&			operator<<( std::ostream &o, Bureaucrat const &i );

#endif /* ****************************************************** BUREAUCRAT_H */