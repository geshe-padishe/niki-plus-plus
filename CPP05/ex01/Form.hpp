#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>

class Form
{

	public:
		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Grade ID too high");
				}
		};
		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Grade ID too low");
				}
		};
		Form();
		Form( Form const & src );
		~Form();
		Form &		operator=( Form const & rhs );
		std::string getName() const;
		bool		getis_signed() const;
		unsigned int getSignReq() const;
		unsigned int getExecReq() const;

	private:
		const std::string name;
		bool is_signed;
		const unsigned int sign_req;
		const unsigned int exec_req;

};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */