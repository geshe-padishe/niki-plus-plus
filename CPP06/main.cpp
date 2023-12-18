#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
    ScalarConverter *sconv = NULL;

    std::cout << "Minimum value for float: " << std::numeric_limits<float>::min() << std::endl;
    std::cout << "Minimum value for float: " << std::numeric_limits<float>::min() << std::endl;
    std::cout << "Maximum value for double: " << std::numeric_limits<double>::max() << std::endl;
    std::cout << "Maximum value for double: " << std::numeric_limits<double>::max() << std::endl;
    std::cout << "Minimum value for int: " << std::numeric_limits<int>::min() << std::endl;
    std::cout << "Maximum value for int: " << std::numeric_limits<int>::max() << std::endl;
    if (ac == 2)
        sconv->convert(av[1]);
    else
        std::cout << "Invalid arguments" << std::endl;
}