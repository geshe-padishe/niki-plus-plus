#include "Bureaucrat.hpp"

int main()
{
  Bureaucrat  test("TEST", 1);
  Bureaucrat  test2("TEST2", 150);
  Form        form();
  Form        form3("Form3", 10, 20);
  try
  {
    Form      form1("Form1", 200, 200);
  }
  catch(const std::exception& e)
  {
    std::cerr << e.what() << '\n';
  }
  try
  {
    Form      form2("Form2", 0, 0);
  }
  catch(const std::exception& e)
  {
    std::cerr << e.what() << '\n';
  }
  

  test2.signForm(form3);
}