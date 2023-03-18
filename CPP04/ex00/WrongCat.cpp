#include "WrongCat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat Constructor Called" << std::endl;
}

WrongCat::WrongCat( const WrongCat & src )
{
	type = src.type;
	std::cout << "WrongCat Copy Constructor Called" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor Called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongCat &				WrongCat::operator=( WrongCat const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	type = rhs.type;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void WrongCat::makeSound() const
{
	std::cout << "WRONG MIAOUOUUUUUU" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */