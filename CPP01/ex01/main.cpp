#include "Zombie.hpp"

int main(int ac, char **argv)
{
    Zombie  *zombie;
    int     i;

    (void)ac;
    zombie = zombieHorde(10, argv[1]);
    for (i = 0; i < 10; i++)
        zombie[i].announce();
    delete [] zombie;
    return (0);
}
