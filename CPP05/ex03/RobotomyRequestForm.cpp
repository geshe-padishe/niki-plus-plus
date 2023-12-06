#include "RobotomyRequestForm.hpp"

//std::srand(static_cast<unsigned int>(std::time(0)));

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm() : AForm ("Default Target", "RobotomyRequest form", 72, 45) {}
RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ) : AForm(src) {}
RobotomyRequestForm::RobotomyRequestForm( std::string target ) : AForm(target, "RobotomyRequest form", 72, 45) {}
RobotomyRequestForm::RobotomyRequestForm( std::string target, std::string name ) : AForm(target, name, 72, 45) {}
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

	if (!this->get_is_signed())
		throw FormNotSignedException();
	if (this->check_rights(executor))
	{
		std::cout << "DDDDDDDDDDDRRRRRRRRRRRRRRRRRRRRRRRRRRR" << std::endl;
		if (randomNumber % 2)
			std::cout << this->get_target() << " has been succesfully robotomized" << std::endl;
		else
		{
			std::cout << this->get_target() << "'s robotomization has been a failure" << std::endl;
			return (1);
		}
	}
	return (1);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */