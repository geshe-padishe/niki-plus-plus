#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat: public AAnimal
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