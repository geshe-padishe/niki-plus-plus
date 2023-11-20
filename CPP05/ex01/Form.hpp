#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form();
		Form( Form const & src );
		Form(std::string name, int sign_grade, int exec_grade);
		~Form();
		std::string get_name() const;
		bool		get_is_signed() const;
		const int	get_exec_grade() const;
		const int	get_sign_grade() const;
		void		be_signed(Bureaucrat &bc);
		Form &		operator=( Form const & rhs );
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
		const std::string	name;
		bool				is_signed;
		const int			sign_grade;
		const int			exec_grade;
};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */