#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal()
{
	type = "DefaultAnimal";
	std::cout << "Animal Constructor Called" << std::endl;
}

Animal::Animal(std::string type)
{
	this->type = type;
	std::cout << "Animal Parameter Constructor Called" << std::endl;
}

Animal::Animal( const Animal & src )
{
	type = src.type;
	std::cout << "Animal Copy Constructor Called" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal()
{
	std::cout << "Animal Destructor Called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal &				Animal::operator=( Animal const & rhs )
{
	type = rhs.type;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Animal::makeSound() const
{
	std::cout << "ANIMAL SOUND" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string Animal::getType() const
{
	return type;
}

/* ************************************************************************** */
