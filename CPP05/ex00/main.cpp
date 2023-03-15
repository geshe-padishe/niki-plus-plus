#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat test("TEST", 140);
    try 
    { Bureaucrat niki("NIKI", 151); }
    catch (std::exception& me)
    { std::cout << "Caught an Exeption" << std::endl; 
      std::cout << me.what() << std::endl; }

    try 
    { Bureaucrat niki("NIKI", 0); }
    catch (std::exception& me)
    { std::cout << "Caught an Exeption" << std::endl; 
      std::cout << me.what() << std::endl; }

    try 
    { Bureaucrat niki("NIKI", 12); }
    catch (std::exception& me)
    { std::cout << "Caught an Exeption" << std::endl; 
      std::cout << me.what() << std::endl; }
    std::cout << test;
}