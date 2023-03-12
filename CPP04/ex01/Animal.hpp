#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	protected:
		std::string type;

	public:

		Animal();
		Animal(std::string type);
		Animal( Animal const & src );
		virtual ~Animal();
		virtual void makeSound() const;
		std::string getType() const;
		Animal &		operator=( Animal const & rhs );

	private:

};

#endif /* ********************************************************** ANIMAL_H */