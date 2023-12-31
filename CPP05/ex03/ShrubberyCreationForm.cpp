#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm() : AForm ("Default target", "ShrubberyCreation form", 145, 137) {}
ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ) : AForm(src) {}
ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : AForm(target, "ShrubberyCreation form", 145, 137) {}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm() {}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	if (this != &rhs)
	{
		this->~ShrubberyCreationForm();
		new (this) ShrubberyCreationForm(rhs);
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, ShrubberyCreationForm const & i )
{
	o << static_cast<const AForm &>(i);
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

int ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!this->get_is_signed())
		throw FormNotSignedException();
	if (this->check_rights(executor))
	{
		std::string file_name = this->get_target();
		file_name += "_shrubbery";
		std::ofstream outputFile(file_name.c_str());
		if (outputFile.is_open())
		{
			outputFile << "       _-_" << std::endl;
			outputFile << "    /~~   ~~\\" << std::endl;
			outputFile << " /~~         ~~\\" << std::endl;
			outputFile << "{               }" << std::endl;
			outputFile << " \\  _-     -_  /" << std::endl;
			outputFile << "   ~  \\\\ //  ~" << std::endl;
			outputFile << "_- -   | | _- _" << std::endl;
			outputFile << "  _ -  | |   -_" << std::endl;
			outputFile << "      // \\\\" << std::endl;
			outputFile << "       _-_" << std::endl;
			outputFile << "    /~~   ~~\\" << std::endl;
			outputFile << " /~~         ~~\\" << std::endl;
			outputFile << "{               }" << std::endl;
			outputFile << " \\  _-     -_  /" << std::endl;
			outputFile << "   ~  \\\\ //  ~" << std::endl;
			outputFile << "_- -   | | _- _" << std::endl;
			outputFile << "  _ -  | |   -_" << std::endl;
			outputFile << "      // \\\\" << std::endl;
			outputFile.close();	
		}
		return (1);
	}
	return (0);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */