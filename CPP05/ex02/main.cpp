#include "Bureaucrat.hpp"


int main()
{
  try
  {
    RobotomyRequestForm     formr("Robotomy Target");
    PresidentialPardonForm  formp("Pardon Target");
    ShrubberyCreationForm   forms("Shrubbery Target");

    Bureaucrat              test2("Jean", 150);
    Bureaucrat              test("Pierre", 1);

    test2.signForm(formp);
    test.signForm(formp);
    test2.executeForm(formp);
    test.executeForm(formp);
    test2.signForm(forms);
    test.signForm(formr);
    test2.executeForm(formr);
    test.executeForm(formr);
    test2.signForm(forms);
    test.signForm(forms);
    test2.executeForm(forms);
    test.executeForm(forms);
  
  }
  catch(const std::exception& e)
  {
    std::cerr << e.what() << '\n';
  }
}