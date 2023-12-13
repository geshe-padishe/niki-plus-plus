#include "RobotomyRequestForm.hpp"

//std::srand(static_cast<unsigned int>(std::time(0)));

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm() : AForm ("Default Target", "RobotomyRequest form", 72, 45) {}
RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ) : AForm(src) {}
RobotomyRequestForm::RobotomyRequestForm( std::string target ) : AForm(target, "RobotomyRequest form", 25, 5) {}
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
	o << static_cast<const AForm &>(i);
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

int RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	std::srand(time(0));
	int randomNumber = rand();

	std::cout << "DDDDDDDDDDDRRRRRRRRRRRRRRRRRRRRRRRRRRR" << std::endl;
	if (this->get_is_signed() && this->check_rights(executor))
	{
		if (randomNumber % 2)
			std::cout << this->get_target() << " has been succesfully robotomized" << std::endl;
		else
		{
			std::cout << this->get_target() << "'s robotomization has been a failure" << std::endl;
			return (1);
		}
	}
	else
		std::cout << "Failed to execute " << this->get_name() << std::endl;
	return (1);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
