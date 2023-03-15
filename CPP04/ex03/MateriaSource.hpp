#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include <string>
#include "IMateriaSource.hpp"

class AMateria;

class MateriaSource : public IMateriaSource
{

	public:
		MateriaSource();
		MateriaSource( MateriaSource const & src );
		virtual ~MateriaSource();
		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);
		MateriaSource &		operator=( MateriaSource const & rhs );

	private:
		AMateria *_source[4];
		unsigned int	_nb;
};

#endif /* *************************************************** MATERIASOURCE_H */