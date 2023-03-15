#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
	public:

		Character();
		Character( Character const & src );
		Character( std::string _name);
		~Character();
		Character &		operator=( Character const & rhs );
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		std::string const & getName() const;
	private:
		std::string			_name;
		AMateria 			*amaterias[4];
		AMateria 			*bin[100];
		unsigned int 		_throwaways;
};

#endif /* ******************************************************* CHARACTER_H */