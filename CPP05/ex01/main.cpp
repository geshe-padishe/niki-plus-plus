#include "Bureaucrat.hpp"

int main()
{
  Bureaucrat  test("TEST", 1);
  Bureaucrat  test2("TEST2", 150);
  Form        form;
  Form        form3("Form3", 10, 20);
  Form        form4("Form4", 10, 20);
  try
  {
  Form        form5("Form5", 1000, 20);
    /* code */
  }
  catch(const std::exception& e)
  {
    std::cerr << e.what() << '\n';
  }
  try
  {
    Form      form2("Form2", 0, 20);
  }
  catch(const std::exception& e)
  {
    std::cerr << e.what() << '\n';
  }
  
  std::cout << form3;
  std::cout << form4;
  std::cout << form;
  //<< std::endl;
  //std::cout << test << std::endl;
  //test2.signForm(form3);
}