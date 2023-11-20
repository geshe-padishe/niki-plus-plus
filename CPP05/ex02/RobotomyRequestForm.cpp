#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm()
{
	(*this).set_exec_grade(45);
	(*this).set_sign_grade(72);
	(*this).set_name("RebotomyRequest form");
	(*this).set_signed(0);
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src )
{
	(*this).set_exec_grade(src.get_exec_grade());
	(*this).set_sign_grade(src.get_sign_grade());
	(*this).set_name(src.get_name());
	(*this).set_signed(src.get_is_signed());
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & i )
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