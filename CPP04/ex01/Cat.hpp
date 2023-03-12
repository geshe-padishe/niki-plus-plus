#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	public:
		Cat();
		Cat( Cat const & src );
		~Cat();
		void makeSound() const;
		Cat &		operator=( Cat const & rhs );

	private:
		Brain* _brain;
};

#endif /* ************************************************************* CAT_H */