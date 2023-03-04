#include "ClapTrap.hpp"

int main()
{
    ClapTrap trap("OSCARRR");

    trap.attack("NIKI");
    std::cout << "Clap hp: " << trap.getHealth() << std::endl;
    std::cout << "Clap energy: " << trap.getEnergy() << std::endl;
    trap.takeDamage(10);
    std::cout << "Clap hp: " << trap.getHealth() << std::endl;
    std::cout << "Clap energy: " << trap.getEnergy() << std::endl;
    trap.beRepaired(10);
    std::cout << "Clap hp: " << trap.getHealth() << std::endl;
    std::cout << "Clap energy: " << trap.getEnergy() << std::endl;
}
