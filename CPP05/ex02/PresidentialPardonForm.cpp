#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm()
{
	(*this).set_exec_grade(5);
	(*this).set_sign_grade(25);
	(*this).set_name("PresidentialPardon form");
	(*this).set_signed(0);
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src )
{
	(*this).set_exec_grade(src.get_exec_grade());
	(*this).set_sign_grade(src.get_sign_grade());
	(*this).set_name(src.get_name());
	(*this).set_signed(src.get_is_signed());
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm() {}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &				PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, PresidentialPardonForm const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */