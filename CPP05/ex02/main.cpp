#include "Bureaucrat.hpp"


int main()
{
  RobotomyRequestForm     formr;
  PresidentialPardonForm  formp("PRESIDENT TARGET");
  ShrubberyCreationForm   forms;
  try
  {
    Bureaucrat              test2("TEST2", 150);
    Bureaucrat              test("TEST", 1);
  }
  catch(const std::exception& e)
  {
    std::cerr << e.what() << '\n';
  }
  
  Bureaucrat              test("TEST", 1);
  Bureaucrat              test2("TEST2", 150);
  test.signForm(formp);
  test2.executeForm(formp);

  RobotomyRequestForm     formr2;
  PresidentialPardonForm  formp2("PRESIDENT TARGET");
  ShrubberyCreationForm   forms2;
  
}