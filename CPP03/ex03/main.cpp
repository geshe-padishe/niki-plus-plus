#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap trap("Oscar");
    DiamondTrap clap("Yash");

    trap.attack("NIKI");
    trap.setHealth(200);
    
    std::cout << "Clap hp: " << trap.getHealth() << std::endl;
    std::cout << "Clap energy: " << trap.getEnergy() << std::endl;
    trap.takeDamage(1000);
    std::cout << "Clap hp: " << trap.getHealth() << std::endl;
    std::cout << "Clap energy: " << trap.getEnergy() << std::endl;
    trap.beRepaired(1000);
    std::cout << "Clap hp: " << trap.getHealth() << std::endl;
    std::cout << "Clap energy: " << trap.getEnergy() << std::endl;
    trap.whoAmI();
    trap.guardGate();
    trap.highFivesGuys();
}