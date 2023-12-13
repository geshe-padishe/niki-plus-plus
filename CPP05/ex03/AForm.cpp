#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AForm::AForm():  target("Default Target"), name("Default AForm"), is_signed(0), sign_grade(150), exec_grade(150) {}

AForm::AForm( const AForm & src ): target(src.target), name(src.name), is_signed(src.is_signed)
, sign_grade(src.sign_grade), exec_grade(src.exec_grade) {}

AForm::AForm( std::string target, std::string name, int	sign_grade, int	exec_grade )
: target(target), name(name), is_signed(0), sign_grade(sign_grade), exec_grade(exec_grade)
{
	if (sign_grade < 1 || exec_grade < 1)
		throw GradeTooHighException();
	if (sign_grade > 150 || exec_grade > 150)
		throw GradeTooLowException();
}
/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AForm::~AForm() {}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AForm & AForm::operator=(AForm const & rhs)
{
	(void)rhs;		//this->_value = rhs.getValue();

    return *this;
}

std::ostream &			operator<<( std::ostream & o, AForm const & i )
{
	if (i.get_is_signed())
	{
		o << "Form " << i.get_name() << " is signed,"
		<< " requires " << i.get_sign_grade() << " to be signed and "
		<< i.get_exec_grade() << " to be executed" << " on target "
		<< i.get_target() << std::endl;
	}
	else
	{
		o << "Form " << i.get_name() << " is not signed,"
		<< " requires " << i.get_sign_grade() << " to be signed and "
		<< i.get_exec_grade() << " to be executed" << " on target "
		<< i.get_target() << std::endl;
	}
	return o;
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

const char* AForm::FormAlreadySignedException::what() const throw()
{
	return ("Form already signed");
}

const char* AForm::FormNotSignedException::what() const throw()
{
	return ("Form is not signed");
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	AForm::be_signed(Bureaucrat &b)
{
	if (this->is_signed)
		throw FormAlreadySignedException();
	if (b.getGrade() > sign_grade)
		throw GradeTooLowException();
	else
		this->is_signed	= 1;
}

bool	AForm::check_rights(const Bureaucrat &b) const
{
	if (this->exec_grade >= b.getGrade())
		return (1);
	else
		throw GradeTooLowException();
	return (0);
}

void AForm::set_signed(bool sign)
{
	is_signed = sign;
}

std::string AForm::get_name() const
{
	return (name);
}
bool AForm::get_is_signed() const
{
	return (is_signed);
}
int AForm::get_sign_grade() const
{
	return (sign_grade);
}
int AForm::get_exec_grade() const
{
	return (exec_grade);
}

std::string AForm::get_target() const
{
	return (target);
}

void AForm::set_target(std::string target)
{
	this->target = target;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */