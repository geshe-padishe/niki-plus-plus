#include "RobotomyRequestForm.hpp"
/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm() : Aform ("RobotomyRequest form", 72, 45) {}
RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ) : Aform(src) {}
RobotomyRequestForm::RobotomyRequestForm( std::string name ) : Aform(name, 25, 5) {}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm() {}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	if (this != &rhs)
	{
		this->~RobotomyRequestForm();
		new (this) RobotomyRequestForm(rhs);
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & i )
{
	o << static_cast<const Aform &>(i);
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	std::cout << "Robotomy exec" << std::endl;
	std::cout << executor;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */