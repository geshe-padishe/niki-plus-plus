#ifndef WrongAnimal_HPP
# define WrongAnimal_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
	protected:
		std::string type;

	public:

		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal( WrongAnimal const & src );
		~WrongAnimal();
		void makeSound() const;
		std::string getType() const;
		WrongAnimal &		operator=( WrongAnimal const & rhs );

	private:

};

#endif /* ********************************************************** WrongAnimal_H */