#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat test("TEST", 1);
    Bureaucrat test2("TEST2", 150);
    //try 
    //{ Bureaucrat niki("NIKI", 151); }
    //catch (std::exception& me)
    //{ std::cout << "Caught an Exeption" << std::endl; 
    //  std::cout << me.what() << std::endl; }
    //try 
    //{ Bureaucrat niki("NIKI", 0); }
    //catch (std::exception& me)
    //{ std::cout << "Caught an Exeption" << std::endl; 
    //  std::cout << me.what() << std::endl; }
    //try 
    //{ Bureaucrat niki("NIKI", 12); }
    //catch (std::exception& me)
    //{ std::cout << "Caught an Exeption" << std::endl; 
    //  std::cout << me.what() << std::endl; }
    //std::cout << test;
    
    std::cout << test;
    std::cout << test2;

    try
    {
      for(unsigned int i = 0; i < 200; i++)
      {
        test.decreaseGrade();
      }
    }
    catch(const std::exception& e)
    {
      std::cerr << e.what() << '\n';
    }
    try
    {
      for(unsigned int i = 0; i < 200; i++)
      {
        test2.increaseGrade();
      }
    }
    catch(const std::exception& e)
    {
      std::cerr << e.what() << '\n';
    }
}