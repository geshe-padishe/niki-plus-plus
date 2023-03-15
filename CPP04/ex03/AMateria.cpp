#include "AMateria.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/
AMateria::AMateria(std::string const & type)
{
	this->_type = type;
}

AMateria::AMateria() : _type("Nothing") {}

AMateria::AMateria( const AMateria & src )
{
	this->_type = src._type;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AMateria::~AMateria()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AMateria &				AMateria::operator=( AMateria const & rhs )
{
	if ( this != &rhs )
	{
		_type = rhs._type;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void AMateria::use(ICharacter& target)
{
	(void)target;
	std::cout << "AMateria use" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const & AMateria::getType() const
{
	return _type;
}

/* ************************************************************************** */