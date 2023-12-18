#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <limits>
class ScalarConverter
{

	public:

		ScalarConverter();
		ScalarConverter( ScalarConverter const & src );
		~ScalarConverter();
		void	convert(char *number);
		ScalarConverter &		operator=( ScalarConverter const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, ScalarConverter const & i );

#endif /* ************************************************* SCALARCONVERTER_H */