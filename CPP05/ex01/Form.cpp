#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form() : name("DefaultForm"), is_signed(0), exec_req(150), sign_req(150) {}

Form::Form( const Form & src ) {}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
}

std::string Form::getName() const
{
	return name;
}
bool		Form::getis_signed() const
{
	return is_signed;
}
unsigned int Form::getSignReq() const
{
	return sign_req;
}
unsigned int Form::getExecReq() const
{
	return exec_req;
}
/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & rhs )
{
	if ( this != &rhs )
	{
		(std::string)this->name = rhs.name;
		(unsigned int)this->exec_req = rhs.exec_req;
		(unsigned int)this->sign_req = rhs.sign_req;
		this->is_signed = rhs.is_signed;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o << i.getName();
	o << i.getExecReq();
	o << i.getSignReq();
	o << i.getis_signed();
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