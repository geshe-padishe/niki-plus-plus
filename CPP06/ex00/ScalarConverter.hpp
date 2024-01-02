#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <limits>
# include <cmath>
# include <stdio.h>
# include <stdlib.h>
# include <cstring>
# include <iomanip>
class ScalarConverter
{

	public:

		ScalarConverter();
		ScalarConverter( ScalarConverter const & src );
		virtual ~ScalarConverter() = 0;
		//static int		countFractionDigits(double value);
		static int		countDigitsF(const std::string& str, double nb);
		static int		countDigitsD(const std::string& str, double nb);
		static int		countIntegerDigits(double value);
		static int		countDigitsAfterPoint(const std::string& str);
		static bool		isInteger(double value);
		static bool		hasPoint(const std::string& str);
		static bool		isSpecial(const std::string& str);
		static bool		isNumeric(std::string& str, double &nb);
		static void		convert(char *number);
		ScalarConverter &		operator=( ScalarConverter const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, ScalarConverter const & i );

#endif /* ************************************************* SCALARCONVERTER_H */