#include "ScalarConverter.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter( const ScalarConverter & src )
{
	(void)src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScalarConverter::~ScalarConverter()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ScalarConverter &				ScalarConverter::operator=( ScalarConverter const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	(void)rhs;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, ScalarConverter const & i )
{
	//o << "Value = " << i.getValue();
	(void)i;
	(void)o;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	ScalarConverter::convert(char *number)
{
	std::string	s = number;
	float		fmin = std::numeric_limits<float>::min();
	float		fmax = std::numeric_limits<float>::max();
	int			imin = std::numeric_limits<int>::min();
	int			imax = std::numeric_limits<int>::max();
	double		nb;
	
	nb = atof(number);
	std::cout << "double: " << nb << std::endl;
	if (nb < fmin || nb > fmax)
		std::cout << "float: impossible" << std::endl;
	else
		std::cout << "float: " << static_cast<float>(nb) << std::endl;
	if (nb < imin || nb > imax)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(nb) << std::endl;
	if (nb < -128 || nb > 127)
		std::cout << "char: impossible" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(nb) << std::endl;
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */