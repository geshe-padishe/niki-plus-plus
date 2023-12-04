#ifndef AForm_HPP
# define AForm_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	public:
		AForm();
		AForm( AForm const & src );
		AForm( std::string target, std::string name, int sign_grade, int exec_grade );
		virtual ~AForm();
		void set_signed(bool sign);
		std::string 	get_name() const;
		bool			get_is_signed() const;
		int				get_exec_grade() const;
		int				get_sign_grade() const;
		std::string		get_target() const;
		void			set_target(std::string target);
		bool			check_rights(const Bureaucrat &b) const;
		void			be_signed(Bureaucrat &bc);
		virtual int		execute(Bureaucrat const & executor) const = 0;
		AForm & operator=( AForm const & rhs );
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
		std::string			target;
		const std::string	name;
		bool				is_signed;
		const int			sign_grade;
		const int			exec_grade;
};

std::ostream &			operator<<( std::ostream & o, AForm const & i );

#endif /* ************************************************************ AForm_H */