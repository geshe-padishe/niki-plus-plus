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

bool contOnlyPrint(const std::string& s)
{
    for (std::string::const_iterator it = s.begin(); it != s.end(); ++it)
        if (!isprint(*it))
            return false;
    return true;
}

double	ScalarConverter::isInteger(double nb)
{
	return (std::fabs(nb - round(nb)) < std::numeric_limits<double>::epsilon());
}

double	ScalarConverter::doublefloat(char *number)
{
	std::string s = number;
	std::string tail = "";
	float		fmin = -std::numeric_limits<float>::max();
	float		fmax = std::numeric_limits<float>::max();
	double		nb;

	nb = atof(number);
	if (ScalarConverter::isInteger(nb))
		tail = ".0";
	std::cout << "double: " << nb << tail << std::endl;
	if (std::isinf(nb))
		std::cout << "float: " << nb << "f" << std::endl;
	else if (nb < fmin || nb > fmax)
		std::cout << "float: impossible" << std::endl;
	else
		std::cout << "float: " << static_cast<float>(nb) << tail << "f" << std::endl;
	return (nb);
}

void	ScalarConverter::convert(char *number)
{
	std::string	s = number;
	int			imin = std::numeric_limits<int>::min();
	int			imax = std::numeric_limits<int>::max();
	double		nb;
	
	if (!contOnlyPrint(s))
	{
		std::cout << "Error: string contains non printable characters" << std::endl;
		return ;
	}
	nb = doublefloat(number);
	if (nb < imin || nb > imax || std::isnan(nb) || std::isinf(nb))
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(nb) << std::endl;
	if (std::isnan(nb) || std::isinf(nb) || nb < -127 || nb > 126)
		std::cout << "char: Impossible"	<< std::endl;
	else if (nb < 32 || nb > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(nb) << std::endl;
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */