#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
}

Intern::Intern( const Intern & src )
{
	(void)src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &				Intern::operator=( Intern const & rhs )
{
	(void)rhs;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

AForm* Intern::makeForm(std::string name, std::string target)
{
	int			i;
    std::string	tasks[] = {"shrubbery creation", "presidential pardon", "robotomy request"};

	for (i = 0; i < 3; i++)
		if (name == tasks[i])
			break;
	switch (i)
	{
		case 0:
		{
			ShrubberyCreationForm *form = new ShrubberyCreationForm(target, name);
			std::cout << "Intern creates " << name << std::endl;
			return form;
		}
		case 1:
		{
			PresidentialPardonForm *form = new PresidentialPardonForm(target, name);
			std::cout << "Intern creates " << name << std::endl;
			return form;
		}
		case 2:
		{
			RobotomyRequestForm *form = new RobotomyRequestForm(target, name);
			std::cout << "Intern creates " << name << std::endl;
			return form;
		}
		default:
			std::cerr << "Cannot create form: Unknown form type" << std::endl;
	}
	return (NULL);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */