#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat test("TEST", 1);
    Bureaucrat test2("TEST2", 150);
    Bureaucrat test3("niki1", 1);
    Bureaucrat test4("niki2", 150);
    std::cout << test;
    std::cout << test2;
    std::cout << test3;
    std::cout << test4;
    test3 = test;
    test4 = test2;
    std::cout << test3;
    std::cout << test4;
    try
    { Bureaucrat niki("NIKI", 151); }
    catch (std::exception& me)
    { std::cout << me.what() << std::endl; }
    try
    { Bureaucrat niki("NIKI", 0); }
    catch (std::exception& me)
    { std::cout << me.what() << std::endl; }
    try
    {
      for(unsigned int i = 0; i < 200; i++)
        test.decreaseGrade();
    }
    catch(const std::exception& e)
    {
      std::cerr << e.what() << '\n';
    }
    try 
    {
      for(unsigned int i = 0; i < 200; i++)
        test2.increaseGrade();
    }
    catch(const std::exception& e)
    {
      std::cerr << e.what() << '\n';
    }
    std::cout << test;
    std::cout << test2;
}
