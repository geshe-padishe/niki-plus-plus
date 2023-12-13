#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm() : AForm ("Default Target", "PresidentialPardon form", 25, 5) {}
PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ) : AForm(src) {}
PresidentialPardonForm::PresidentialPardonForm( std::string target ) : AForm(target, "PresidentialPardon form", 25, 5) {}
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
	o << static_cast<const AForm &>(i);
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

int PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!this->get_is_signed())
		throw FormNotSignedException();
	if (this->check_rights(executor))
	{
		std::cout << this->get_target() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
		return (1);
	}
	return (0);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */