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

//int ScalarConverter::countFractionDigits(double value)
//{
//    double integralPart;
//    double fractionalPart = std::modf(value, &integralPart);
//
//    int count = 0;
//    while (fractionalPart != 0.0) {
//        fractionalPart *= 10.0;
//        fractionalPart = std::modf(fractionalPart, &integralPart);
//        count++;
//    }
//    return count;
//}

int	ScalarConverter::countDigitsF(const std::string& str, double nb)
{
	if (countIntegerDigits(nb) >= 7 || std::isinf(nb) || std::isnan(nb))
		return (1);
	return (std::min(7 - countIntegerDigits(nb), countDigitsAfterPoint(str)));
}

int	ScalarConverter::countDigitsD(const std::string& str, double nb)
{
	if (countIntegerDigits(nb) >= 15 || std::isinf(nb) || std::isnan(nb))
		return (1);
	return (std::min(15 - countIntegerDigits(nb), countDigitsAfterPoint(str)));
}


int ScalarConverter::countIntegerDigits(double value)
{
	int count = 0;

	if (value == std::numeric_limits<double>::infinity() || value == -std::numeric_limits<double>::infinity())
		return (1);
	value = abs(value);
	while (value > 1)
	{
		count++;
		value /= 10;
	}
	return count;
}

bool ScalarConverter::isInteger(double value)
{
    double integralPart;
    double fractionalPart = std::modf(value, &integralPart);

    return std::abs(fractionalPart) < std::numeric_limits<double>::epsilon();
}

int	ScalarConverter::countDigitsAfterPoint(const std::string& str)
{
    for (size_t i = 0; i < str.length(); ++i)
	{
        if (str[i] == '.')
            return (str.length() - i - 1);
    }
	return 1;
}

bool	ScalarConverter::hasPoint(const std::string& str)
{
    for (size_t i = 0; i < str.length(); ++i)
	{
        if (str[i] == '.')
            return true;
    }
	return false;
}

bool	ScalarConverter::isSpecial(const std::string& str)
{
	const char	*specials[] = {"+inf", "-inf", "inf", "nan"};

    for (size_t i = 0; i < 4; ++i)
	{
        if (std::strcmp(str.c_str(), specials[i]) == 0)
			return (true);
	}
	return false;
}

bool	ScalarConverter::isNumeric(std::string& str, double &nb)
{
	char	currentChar;
	char*	endptr;

    if (str.empty())
        return false;
	else if (ScalarConverter::isSpecial(str))
	{
	    nb = strtod(str.c_str(), &endptr);
		return true;
	}
	else if (str[str.length() - 1] == 'f')
		str.erase(str.length() - 1);
    for (size_t i = 0; i < str.length(); ++i)
	{
        currentChar= str[i];
        if (i == 0 && (currentChar == '+' || currentChar == '-'))
            continue;
        if (!isdigit(currentChar) && currentChar != '.')
            return false;
    }
    nb = strtod(str.c_str(), &endptr);
    return (*endptr == '\0');
}

void	ScalarConverter::convert(char *number)
{
	std::string s = number;
	float		fmin = -std::numeric_limits<float>::max();
	float		fmax = std::numeric_limits<float>::max();
	int			imin = std::numeric_limits<int>::min();
	int			imax = std::numeric_limits<int>::max();
	double		nb;

	if (!ScalarConverter::isNumeric(s, nb))
	{
		std::cout << "\'" << number << "\':" << "Not a number" << std::endl;
		return ;
	}
	if (std::isnan(nb) || std::isinf(nb) || nb < -127 || nb > 126)
		std::cout << "char: impossible"	<< std::endl;
	else if (nb < 32 || nb > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char:  \'" << static_cast<char>(nb) << "\'" << std::endl;
	if (nb < imin || nb > imax || std::isnan(nb) || std::isinf(nb))
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(nb) << std::endl;
	std::cout << std::fixed;
	if (std::isinf(nb))
		std::cout << "float: " << nb << "f" << std::endl;
	else if (nb < fmin || nb > fmax)
		std::cout << "float: impossible" << std::endl;
	else
		std::cout << "float:  " << std::setprecision(countDigitsF(s, nb)) << static_cast<float>(nb) << "f" << std::endl;
	std::cout << "double: " << std::setprecision(countDigitsD(s, nb)) << nb << std::endl;
	//std::cout << "int digits = " << countIntegerDigits(nb) << std::endl;
	//std::cout << "flo digits = " << countDigitsAfterPoint(s) << std::endl;
	//std::cout << "count digitsf = " << countDigitsF(s, nb) << std::endl;
	//std::cout << "count digitsd = " << countDigitsD(s, nb) << std::endl;
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */