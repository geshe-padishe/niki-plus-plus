#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class RobotomyRequestForm: public Aform
{

	public:
		virtual void execute(Bureaucrat const & executor) const;
		RobotomyRequestForm();
		RobotomyRequestForm( RobotomyRequestForm const & src );
		RobotomyRequestForm( std::string name, int	sign_grade, int	exec_grade );
		~RobotomyRequestForm();
		RobotomyRequestForm &		operator=( RobotomyRequestForm const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & i );

#endif /* ********************************************* ROBOTOMYREQUESTFORM_H */