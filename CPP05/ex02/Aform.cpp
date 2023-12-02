#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Aform::Aform():  target("Default Target"), name("Default Aform"), is_signed(0), sign_grade(150), exec_grade(150) {}

Aform::Aform( const Aform & src ): target(src.target), name(src.name), is_signed(src.is_signed)
, sign_grade(src.sign_grade), exec_grade(src.exec_grade) {}

Aform::Aform( std::string name, int	sign_grade, int	exec_grade )
: target("Default Target"), name(name), is_signed(0), sign_grade(sign_grade), exec_grade(exec_grade)
{
	if (sign_grade < 1 || exec_grade < 1)
		throw GradeTooHighException();
	if (sign_grade > 150 || exec_grade > 150)
		throw GradeTooLowException();
}
/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Aform::~Aform() {}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Aform & Aform::operator=(Aform const & rhs)
{
	if (this != &rhs)
		this->is_signed = rhs.is_signed;
    return *this;
}

std::ostream &			operator<<( std::ostream & o, Aform const & i )
{
	if (i.get_is_signed())
	{
		o << "Aform " << i.get_name() << " is signed,"
		<< " requires " << i.get_sign_grade() << " to be signed and "
		<< i.get_exec_grade() << " to be executed" << std::endl;
	}
	else
	{
		o << "Aform " << i.get_name() << " is not signed,"
		<< " requires " << i.get_sign_grade() << " to be signed and "
		<< i.get_exec_grade() << " to be executed" << std::endl;
	}
	return o;
}

const char* Aform::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char* Aform::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}
/*
** --------------------------------- METHODS ----------------------------------
*/

bool	Aform::check_rights(Bureaucrat &b)
{
	if (this->exec_grade <= b.getGrade())
		return (1);
	return (0);
}

void Aform::set_signed(bool sign)
{
	is_signed = sign;
}

std::string Aform::get_name() const
{
	return (name);
}
bool Aform::get_is_signed() const
{
	return (is_signed);
}
int Aform::get_sign_grade() const
{
	return (sign_grade);
}
int Aform::get_exec_grade() const
{
	return (exec_grade);
}
void	Aform::be_signed(Bureaucrat &b)
{
	if (b.getGrade() > sign_grade)
		throw GradeTooLowException();
	else
		this->is_signed	= 1;
}

std::string Aform::get_target_name() const
{
	return (target);
}

void Aform::set_target_name(std::string target)
{
	this->target = target;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */