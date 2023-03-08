#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap trap("OSCARRR");
    ScavTrap scav("yashhh");

    std::cout << "-----------------FRAG-----------------" << std::endl;
    std::cout << "Clap hp: " << trap.getHealth() << std::endl;
    std::cout << "Clap energy: " << trap.getEnergy() << std::endl;
    trap.attack("NIKI");
    trap.takeDamage(1000);
    std::cout << "Clap hp: " << trap.getHealth() << std::endl;
    std::cout << "Clap energy: " << trap.getEnergy() << std::endl;
    trap.beRepaired(1000);
    std::cout << "Clap hp: " << trap.getHealth() << std::endl;
    std::cout << "Clap energy: " << trap.getEnergy() << std::endl;
    std::cout << "-----------------SCAV-----------------" << std::endl;
    std::cout << "Clap hp: " << scav.getHealth() << std::endl;
    std::cout << "Clap energy: " << scav.getEnergy() << std::endl;
    scav.attack("NIKI");
    scav.takeDamage(1000);
    std::cout << "Clap hp: " << scav.getHealth() << std::endl;
    std::cout << "Clap energy: " << scav.getEnergy() << std::endl;
    scav.beRepaired(1000);
    std::cout << "Clap hp: " << scav.getHealth() << std::endl;
    std::cout << "Clap energy: " << scav.getEnergy() << std::endl;
    trap.highFivesGuys();
    scav.guardGate();
}