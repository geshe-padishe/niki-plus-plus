#include "Bureaucrat.hpp"

int main()
{
  Bureaucrat  test("TEST", 1);
  Bureaucrat  test2("TEST2", 150);
  RobotomyRequestForm        form("FORM ROBO", 120, 120);
  RobotomyRequestForm        formr;
  PresidentialPardonForm        form3;
  PresidentialPardonForm        form6(form3);
  ShrubberyCreationForm        form4;
  ShrubberyCreationForm        form5(form4);

  formr = form;
  formr.execute(test);
  form3.execute(test);
  form4.execute(test2);
  std::cout << formr;
  std::cout << form;
  //std::cout << form3;
  //std::cout << form4;
  //std::cout << form;
  //test.signform(form3);
  //test.signform(form4);
  //test.signform(form);
  //std::cout << form3;
  //std::cout << form4;
  //std::cout << form;
  //std::cout << form6;
  //std::cout << form5;
  //<< std::endl;
  //std::cout << test << std::endl;
  //test2.signForm(form3);
}