#include "Bureaucrat.hpp"

int main()
{
  try
  { Form        form("Bad Form", 160, 35); }
  catch(const std::exception& e)
  { std::cerr << e.what() << '\n'; }
  try
  { Form        form2("Bad Form", 0, 35); }
  catch(const std::exception& e)
  { std::cerr << e.what() << '\n'; }

  try
  {
    Bureaucrat  test("TEST", 1);
    Bureaucrat  test2("TEST2", 150);
    Form        form;
    Form        form3("Form3", 10, 20);
    Form        form4("Form4", 10, 20);

    std::cout << form3;
    std::cout << form4;
    std::cout << form;
    test2.signForm(form);
    test2.signForm(form3);
    test2.signForm(form4);
    std::cout << form3;
    std::cout << form4;
    std::cout << form;
    test.signForm(form);
    test.signForm(form3);
    test.signForm(form4);
    std::cout << form3;
    std::cout << form4;
    std::cout << form;   
  }
  catch(const std::exception& e)
  {
    std::cerr << e.what() << '\n';
  }
}