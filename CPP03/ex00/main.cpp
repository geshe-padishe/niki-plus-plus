#include "ClapTrap.hpp"

int main()
{
    ClapTrap trap("GIGI");
    ClapTrap trap2("NIKI");

    std::cout << "Clap hp: " << trap.getHealth() << std::endl;
    std::cout << "Clap energy: " << trap.getEnergy() << std::endl;
    std::cout << "Clap2 hp: " << trap2.getHealth() << std::endl;
    std::cout << "Clap2 energy: " << trap2.getEnergy() << std::endl;
    trap.takeDamage(10);
    trap2.takeDamage(9);
    std::cout << "Clap hp: " << trap.getHealth() << std::endl;
    std::cout << "Clap energy: " << trap.getEnergy() << std::endl;
    std::cout << "Clap2 hp: " << trap2.getHealth() << std::endl;
    std::cout << "Clap2 energy: " << trap2.getEnergy() << std::endl;
    trap.beRepaired(10);
    trap2.beRepaired(10);
    trap.attack("NIKI");
    trap2.attack("GIGI");
    std::cout << "Clap hp: " << trap.getHealth() << std::endl;
    std::cout << "Clap energy: " << trap.getEnergy() << std::endl;
    std::cout << "Clap2 hp: " << trap2.getHealth() << std::endl;
    std::cout << "Clap2 energy: " << trap2.getEnergy() << std::endl;
}
