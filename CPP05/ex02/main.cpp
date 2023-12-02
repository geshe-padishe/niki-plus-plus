#include "Bureaucrat.hpp"
#include <random>

int main()
{
  Bureaucrat  test("TEST", 1);
  Bureaucrat  test2("TEST2", 150);
  RobotomyRequestForm        formr;
  PresidentialPardonForm        form3("NIKI FORM");
  PresidentialPardonForm        form6("LILIAN FORM");
  ShrubberyCreationForm        form4;
  ShrubberyCreationForm        form5(form4);

  //std::cout << form3;
  //std::cout << form6;
  //form3 = form6;
  //std::cout << form3;
  //std::cout << form3;
  std::cout << form3;
  form3.execute(test);
  form3.set_target_name("New Name");
  form3.execute(test);
  std::cout << form3;
  form3 = form6;
  std::cout << form3;
  //formr.execute(test);
  //form3.execute(test);
  //form4.execute(test2);
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