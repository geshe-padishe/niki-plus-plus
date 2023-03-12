#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	public:
		Dog();
		Dog( Dog const & src );
		~Dog();
		void makeSound() const;
		Dog &		operator=( Dog const & rhs );

	private:
		Brain* _brain;
};


#endif /* ************************************************************* DOG_H */