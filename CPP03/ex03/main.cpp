#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap trap("Oscar");
    DiamondTrap defo;

    trap.attack("NIKI");
    defo.attack("NIKI2");
    trap.setHealth(200);

    std::cout << "Defo hp: " << defo.getHealth() << std::endl;
    std::cout << "Defo energy: " << defo.getEnergy() << std::endl;
    std::cout << "Clap hp: " << trap.getHealth() << std::endl;
    std::cout << "Clap energy: " << trap.getEnergy() << std::endl;
    trap.takeDamage(1000);
    defo.takeDamage(1000);
    std::cout << "Defo hp: " << defo.getHealth() << std::endl;
    std::cout << "Defo energy: " << defo.getEnergy() << std::endl;
    std::cout << "Clap hp: " << trap.getHealth() << std::endl;
    std::cout << "Clap energy: " << trap.getEnergy() << std::endl;
    trap.beRepaired(1000);
    defo.beRepaired(1000);
    std::cout << "Defo hp: " << defo.getHealth() << std::endl;
    std::cout << "Defo energy: " << defo.getEnergy() << std::endl;
    std::cout << "Clap hp: " << trap.getHealth() << std::endl;
    std::cout << "Clap energy: " << trap.getEnergy() << std::endl;
    trap.whoAmI();
    trap.guardGate();
    trap.highFivesGuys();
    defo.whoAmI();
    defo.guardGate();
    defo.highFivesGuys();
}