#include "AAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AAnimal::AAnimal()
{
	type = "DefaultAAnimal";
	std::cout << "AAnimal Constructor Called" << std::endl;
}

AAnimal::AAnimal(std::string type)
{
	this->type = type;
	std::cout << "AAnimal Parameter Constructor Called" << std::endl;
}

AAnimal::AAnimal( const AAnimal & src )
{
	type = src.type;
	std::cout << "AAnimal Copy Constructor Called" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AAnimal::~AAnimal()
{
	std::cout << "AAnimal Destructor Called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AAnimal &				AAnimal::operator=( AAnimal const & rhs )
{
	type = rhs.type;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string AAnimal::getType() const
{
	return type;
}

/* ************************************************************************** */