#include "Harl.hpp"

int main()
{
    Harl harl;

    harl.complain("ERROR");
    std::cout << "prev = ERROR" << std::endl;
    harl.complain("DEBUG");
    std::cout << "prev = DEBUG" << std::endl;
    harl.complain("WARNING");
    std::cout << "prev = WARNING" << std::endl;
    harl.complain("INFO");
    std::cout << "prev = INFO" << std::endl;
}