#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/



Bureaucrat::Bureaucrat() : name("DefaultBureaucrat"), grade (150) {}

Bureaucrat::Bureaucrat( const Bureaucrat & src ) : name(src.name), grade(src.grade) {}

Bureaucrat::Bureaucrat( std::string name, unsigned int grade) : name(name), grade(grade) 
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
}
/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat() {}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & rhs )
{
	if ( this != &rhs )
	{
		this->~Bureaucrat();
		new (this) Bureaucrat(rhs);
	}
	return *this;
}

std::ostream &			operator<<( std::ostream &o, Bureaucrat const & i )
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade() << std::endl;
	return o;
}

/*
** ------------------------------- EXCEPTION --------------------------------
*/

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

/*
** --------------------------------- METHODS ----------------------------------
*/

std::string Bureaucrat::getName() const
{
	return (this->name);
}

unsigned int Bureaucrat::getGrade() const
{
	return (this->grade);
}

void Bureaucrat::signForm( Form &f )
{
	try
	{
		f.be_signed(*this);
		std::cout << name << " signed " << f.get_name() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << name << " couldn't sign " << f.get_name() << " because: ";
		std::cerr << e.what() << '\n';
	}
}

void Bureaucrat::increaseGrade()
{
	std::cout << "Bureaucrat " << name << " grade " << grade  << " increasing" << std::endl;
	if (grade > 1)
	{
		grade--;
		std::cout << "Bureaucrat " << name << " grade is now " << grade << std::endl;
	}
	else
		throw GradeTooHighException();
}

void Bureaucrat::decreaseGrade()
{
	std::cout << "Bureaucrat " << name << " grade " << grade  << " decreasing" << std::endl;
	if (grade < 150)
	{
		grade++;
		std::cout << "Bureaucrat " << name << " grade is now " << grade << std::endl;
	}
	else
		throw GradeTooLowException();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */