#include "Bureaucrat.hpp"


int main()
{
  try
  {
    
    Bureaucrat              test("TEST", 1);
    Bureaucrat              test2("TEST2", 150);
    RobotomyRequestForm     formr;
    PresidentialPardonForm  form3("PRESIDENT TARGET");
    PresidentialPardonForm  form6("PRESIDENT OTHER TARET");
    ShrubberyCreationForm   form4;
    ShrubberyCreationForm   form5(form4);

    form3.be_signed(test);
    formr.be_signed(test);
    form5.be_signed(test);

    form3.execute(test);
    formr.execute(test);
    form5.execute(test);
      /* code */
  }
  catch(const std::exception& e)
  {
    std::cerr << e.what() << '\n';
  }
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