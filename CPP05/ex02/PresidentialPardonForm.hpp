#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class PresidentialPardonForm: public Aform
{

	public:
		virtual void execute(Bureaucrat const & executor) const;
		PresidentialPardonForm();
		PresidentialPardonForm( PresidentialPardonForm const & src );
		PresidentialPardonForm( std::string name);
		~PresidentialPardonForm();
		PresidentialPardonForm &		operator=( PresidentialPardonForm const & rhs );

};

std::ostream &			operator<<( std::ostream & o, PresidentialPardonForm const & i );

#endif /* ****************************************** PRESIDENTIALPARDONFORM_H */