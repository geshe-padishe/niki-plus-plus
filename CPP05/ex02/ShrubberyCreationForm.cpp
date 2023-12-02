#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm() : Aform ("ShrubberyCreation form", 145, 137) {}
ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ) : Aform(src) {}
ShrubberyCreationForm::ShrubberyCreationForm( std::string name ) : Aform(name, 25, 5) {}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm() {}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	if (this != &rhs)
	{
		this->~ShrubberyCreationForm();
		new (this) ShrubberyCreationForm(rhs);
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, ShrubberyCreationForm const & i )
{
	o << static_cast<const Aform &>(i);
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::cout << "Shrubbery exec" << std::endl;
	std::cout << executor;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */