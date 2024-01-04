#include "Data.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Data::Data(): nb(0)
{
}

Data::Data( const Data & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Data::~Data()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Data &				Data::operator=( Data const & rhs )
{
	if ( this != &rhs )
	{
		this->nb = rhs.getNumber();
	}
	(void)rhs;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Data const & i )
{
	//o << "Value = " << i.getValue();
	(void)i;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

int	Data::getNumber() const
{
	return this->nb;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */