#include "ScavTrap.hpp"

int main()
{
    ScavTrap trap("SCAV");
    ScavTrap trap2("SCAV2");
    ScavTrap trap3(trap);
    ScavTrap trap4("NIKI");

    trap4 = trap3;
    std::cout << "Scav hp: " << trap2.getHealth() << std::endl;
    std::cout << "Scav energy: " << trap2.getEnergy() << std::endl;
    std::cout << "Scav hp: " << trap.getHealth() << std::endl;
    std::cout << "Scav energy: " << trap.getEnergy() << std::endl;
    trap.takeDamage(50);
    trap2.takeDamage(60);
    std::cout << "Scav hp: " << trap2.getHealth() << std::endl;
    std::cout << "Scav energy: " << trap2.getEnergy() << std::endl;
    std::cout << "Scav hp: " << trap.getHealth() << std::endl;
    std::cout << "Scav energy: " << trap.getEnergy() << std::endl;
    trap.beRepaired(10);
    trap2.beRepaired(10);
    trap.attack("SCAV");
    trap2.attack("NIKI");
    trap.guardGate();
    trap2.guardGate();
    std::cout << "Scav hp: " << trap2.getHealth() << std::endl;
    std::cout << "Scav energy: " << trap2.getEnergy() << std::endl;
    std::cout << "Scav hp: " << trap.getHealth() << std::endl;
    std::cout << "Scav energy: " << trap.getEnergy() << std::endl;
}
