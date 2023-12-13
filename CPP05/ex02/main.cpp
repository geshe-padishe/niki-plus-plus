#include "Bureaucrat.hpp"


int main()
{
  try
  {
    RobotomyRequestForm     formr;
    PresidentialPardonForm  formp("PRESIDENT TARGET");
    ShrubberyCreationForm   forms;

    Bureaucrat              test2("TEST2", 150);
    Bureaucrat              test("TEST", 1);

    test2.signForm(formp);
    test.signForm(formp);
    test2.executeForm(formp);
    test.executeForm(formp);

    RobotomyRequestForm     formr2;
    PresidentialPardonForm  formp2("PRESIDENT TARGET");
    ShrubberyCreationForm   forms2;
  
  }
  catch(const std::exception& e)
  {
    std::cerr << e.what() << '\n';
  }
}