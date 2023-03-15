#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character() : _name("Niki"), _throwaways(0)
{
	for (int i = 0; i < 4; i++)
		amaterias[i] = NULL;
	for (int i = 0; i < 100; i++)
		bin[i] = NULL;
}

Character::Character( const Character & src )
{
	*this = src;
}

Character::Character( std::string _name) : _throwaways(0)
{
	for (int i = 0; i < 4; i++)
		amaterias[i] = NULL;
	for (int i = 0; i < 100; i++)
		bin[i] = NULL;
	this->_name = _name;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character() 
{
	for (int i = 0; i < 4; i++)
		if (amaterias[i])
			delete amaterias[i];
	for (int i = 0; i < 100; i++)
		if (bin[i])
			delete bin[i];
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &				Character::operator=( Character const & rhs )
{
	if ( this != &rhs )
	{
		_name = rhs._name;
		for (int i = 0; i < 4; i++)
		{
			if (amaterias[i])
				delete amaterias[i];
		}
		for (int i = 0; i < 4; i++)
		{
			if (rhs.amaterias[i])
				amaterias[i] = rhs.amaterias[i]->clone();
		}
		for (int i = 0; i < 100; i++)
		{
			if (rhs.bin[i])
				bin[i] = rhs.bin[i]->clone();
		}
		_throwaways = rhs._throwaways;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!amaterias[i] && m)
		{
			amaterias[i] = m;
			return ;
		}
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (amaterias[idx] != NULL)
		amaterias[idx]->use(target);
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3)
		if (amaterias[idx])
		{
			bin[_throwaways] = amaterias[idx];
			amaterias[idx] = NULL;
			_throwaways++;
		}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const & Character::getName() const
{
	return _name;
}

/* ************************************************************************** */