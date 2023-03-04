#include "ScavTrap.hpp"

int main()
{
    ScavTrap trap("OSCARRR");
    ClapTrap clap("yashhh");

    trap.attack("NIKI");
    trap.setHealth(200);
    
    std::cout << "Clap hp: " << trap.getHealth() << std::endl;
    std::cout << "Clap energy: " << trap.getEnergy() << std::endl;
    trap.takeDamage(10);
    std::cout << "Clap hp: " << trap.getHealth() << std::endl;
    std::cout << "Clap energy: " << trap.getEnergy() << std::endl;
    trap.beRepaired(10);
    std::cout << "Clap hp: " << trap.getHealth() << std::endl;
    std::cout << "Clap energy: " << trap.getEnergy() << std::endl;
}