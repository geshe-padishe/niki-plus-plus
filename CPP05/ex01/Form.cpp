#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form(): name("Default Form"), is_signed(0), sign_grade(150), exec_grade(150) {}

Form::Form( const Form & src ): name(src.name), is_signed(src.is_signed)
, sign_grade(src.sign_grade), exec_grade(src.exec_grade) {}

Form::Form( char *name, int	sign_grade, int	exec_grade )
: name(name), is_signed(is_signed), sign_grade(sign_grade), exec_grade(exec_grade)
{
	if (sign_grade < 1 || exec_grade < 1)
		throw GradeTooHighException();
	if (sign_grade > 150 || exec_grade > 150)
		throw GradeTooLowException();
}
/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form() {}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	if (i.get_is_signed())
	{
		o << "Form " << i.get_name() << "is signed,"
		<< " requires " << i.get_sign_grade() << " to be signed and "
		<< i.get_exec_grade() << " to be executed" << std::endl;
	}
	else
	{
		o << "Form " << i.get_name() << "is not signed,"
		<< " requires " << i.get_sign_grade() << " to be signed and "
		<< i.get_exec_grade() << " to be executed" << std::endl;
	}
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

const char* Form::get_name() const
{
	return (name);
}
bool Form::get_is_signed() const
{
	return (is_signed);
}
const int Form::get_sign_grade() const
{
	return (sign_grade);
}
const int Form::get_exec_grade() const
{
	return (exec_grade);
}
void	Form::be_signed(const Bureaucrat &b)
{
	if (b.getGrade() > sign_grade)
		throw GradeTooLowException();
	else
		return;
	/*finit*/
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */