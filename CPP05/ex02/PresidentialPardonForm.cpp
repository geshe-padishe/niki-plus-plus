#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm() : Aform ("PresidentialPardon form", 25, 5) {}
PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ) : Aform(src) {}
PresidentialPardonForm::PresidentialPardonForm( std::string name ) : Aform(name, 25, 5) {}
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
	{
		this->~PresidentialPardonForm();
		new (this) PresidentialPardonForm(rhs);
	}
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
	std::cout << "Presidential exec to " << this->get_target_name() << std::endl;
	std::cout << executor;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */