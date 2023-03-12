#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog() : Animal("Dog")
{
	_brain = new Brain();
	std::cout << "Dog Constructor Called" << std::endl;
}

Dog::Dog( const Dog & src )
{
	type = src.type;
	_brain = src._brain;
	std::cout << "Dog Copy Constructor Called" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	std::cout << "Dog Destructor Called" << std::endl;
	delete _brain;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &				Dog::operator=( Dog const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	type = rhs.type;
	_brain = rhs._brain;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Dog::makeSound() const
{
	std::cout << "WAF WAF" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */