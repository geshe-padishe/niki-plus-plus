#include "Zombie.hpp"

int main(int ac, char **argv)
{
    Zombie *zombie;
    Zombie a;

    (void)ac;
    a.setName("toto");
    a.announce();
    zombie = newZombie(argv[1]);
    zombie->announce(); 
    delete zombie;
    return (0);
}
