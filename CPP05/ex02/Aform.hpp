#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Aform
{
	public:
		Aform();
		Aform( Aform const & src );
		Aform(std::string name, int sign_grade, int exec_grade);
		virtual ~Aform();
		void set_signed(bool sign);
		std::string get_name() const;
		bool		get_is_signed() const;
		int			get_exec_grade() const;
		int			get_sign_grade() const;
		bool		check_rights(Bureaucrat &b);
		void		be_signed(Bureaucrat &bc);
		virtual void execute(Bureaucrat const & executor) const = 0;
		Aform & operator=( Aform const & rhs );
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

std::ostream &			operator<<( std::ostream & o, Aform const & i );

#endif /* ************************************************************ Aform_H */