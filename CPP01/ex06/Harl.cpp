#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout << "Debug" << std::endl;
}

void Harl::info(void)
{
    std::cout << "Info" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "Warning" << std::endl;
}

void Harl::error(void)
{
    std::cout << "Error" << std::endl;
}

void Harl::complain (std::string level)
{
    int i;
    std::string  levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*complaints[4])(void) = {&Harl::debug, &Harl::info,
                                    &Harl::warning, &Harl::error};
    for(i = 0; i < 4; i++)
    {
        if (!level.compare(levels[i]))
            for (; i < 4; i++)
                (this->*complaints[i])();
    }
}