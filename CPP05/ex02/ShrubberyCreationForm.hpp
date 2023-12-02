#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class ShrubberyCreationForm: public Aform
{

	public:
		virtual void execute(Bureaucrat const & executor) const;
		ShrubberyCreationForm();
		ShrubberyCreationForm( ShrubberyCreationForm const & src );
		ShrubberyCreationForm(std::string name);
		~ShrubberyCreationForm();
		ShrubberyCreationForm &		operator=( ShrubberyCreationForm const & rhs );

};

std::ostream &			operator<<( std::ostream & o, ShrubberyCreationForm const & i );

#endif /* ******************************************* SHRUBBERYCREATIONFORM_H */