#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <string>
# include <stdint.h>
# include "Data.hpp"

class Serializer
{

	public:

		Serializer();
		Serializer( Serializer const & src );
		~Serializer();
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
		Serializer &		operator=( Serializer const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, Serializer const & i );

#endif /* ****************************************************** SERIALIZER_H */