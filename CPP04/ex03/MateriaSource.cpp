#include "MateriaSource.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

MateriaSource::MateriaSource() : _nb(0)
{
	for (int i = 0; i < 4; i++)
		_source[i] = NULL;
}

MateriaSource::MateriaSource( const MateriaSource & src )
{
	_nb = src._nb;
	for (int i = 0; i < 4; i++)
		_source[i] = src._source[i];
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

MateriaSource::~MateriaSource()
{
	for (unsigned int i = 0; i < _nb; i++)
		if (_source[i])
			delete _source[i];
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

MateriaSource &				MateriaSource::operator=( MateriaSource const & rhs )
{
	if ( this != &rhs )
	{
		this->~MateriaSource();
		_nb = rhs._nb;
		for (int i = 0; i < 4; i++)
			_source[i] = rhs._source[i];
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void MateriaSource::learnMateria(AMateria* amateria)
{
	if (_nb > 3)
	{
		std::cout << "Cannot learn more Amateria" << std::endl;
		if (amateria)
			delete amateria;
		return ;
	}
	if (!amateria)
		return ;
	_source[_nb] = amateria;
	_nb++;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (unsigned int i = 0; i < _nb; i++)
	{
		if (_source[i]->getType() == type)
			return (_source[i]->clone());
	}
	return NULL;
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */