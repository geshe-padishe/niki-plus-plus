#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>
#include "AMateria.hpp"

class Cure : public AMateria
{

	public:

		Cure();
		Cure( Cure const & src );
		~Cure();
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
		Cure &		operator=( Cure const & rhs );

	private:
		std::string _type;

};

#endif /* ************************************************************ CURE_H */