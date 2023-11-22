#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm() : Aform ("PresidentialPardon form", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ) : Aform(src) {}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm() {}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &				PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	if (this != &rhs)
		std::cout << "presidential = operator" << std::endl;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, PresidentialPardonForm const & i )
{
	o << static_cast<const Aform &>(i);
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	std::cout << "Presidential exec" << std::endl;
	std::cout << executor;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */