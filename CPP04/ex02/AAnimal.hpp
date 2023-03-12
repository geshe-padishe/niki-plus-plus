#ifndef AAnimal_HPP
# define AAnimal_HPP

# include <iostream>
# include <string>

class AAnimal
{
	protected:
		std::string type;

	public:

		AAnimal();
		AAnimal(std::string type);
		AAnimal( AAnimal const & src );
		~AAnimal();
		virtual void makeSound() const = 0;
		std::string getType() const;
		AAnimal &	operator=( AAnimal const & rhs );

	private:

};

#endif /* ********************************************************** AAnimal_H */