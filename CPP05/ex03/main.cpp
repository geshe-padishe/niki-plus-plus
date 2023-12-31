#include "Bureaucrat.hpp"


int main()
{
  try
  {
    Intern                  intern;
    Bureaucrat              bur("TEST", 1);
    Bureaucrat              bur2("TEST2", 150);

    AForm                   *roboform = intern.makeForm("robotomy request", "robo niki");
    AForm                   *presform = intern.makeForm("presidential pardon", "pres niki");
    AForm                   *shrubform = intern.makeForm("shrubbery creation", "shrub niki");

    std::cout << *shrubform;
    std::cout << *roboform;
    std::cout << *presform;

    bur2.signForm(*shrubform);
    bur2.signForm(*roboform);
    bur2.signForm(*presform);

    bur2.executeForm(*shrubform);
    bur2.executeForm(*roboform);
    bur2.executeForm(*presform);

    bur.signForm(*shrubform);
    bur.signForm(*roboform);
    bur.signForm(*presform);

    bur2.executeForm(*shrubform);
    bur2.executeForm(*roboform);
    bur2.executeForm(*presform);

    bur.executeForm(*shrubform);
    bur.executeForm(*roboform);
    bur.executeForm(*presform);
  }
  catch(const std::exception& e)
  {
    std::cerr << e.what() << '\n';
  }
}