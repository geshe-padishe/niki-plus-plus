#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{

	public:

		Brain();
		Brain( Brain const & src );
		~Brain();
		std::string *ideas;
	
		Brain &		operator=( Brain const & rhs );

	private:

};

#endif /* *********************************************************** BRAIN_H */