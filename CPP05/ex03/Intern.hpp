#ifndef INTERN_HPP
# define INTERN_HPP

# include "Bureaucrat.hpp"

class Intern
{

	public:

		Intern();
		Intern( Intern const & src );
		~Intern();
		AForm* makeForm(std::string name, std::string target);
		Intern &		operator=( Intern const & rhs );

	private:

};

#endif /* ********************************************************** INTERN_H */