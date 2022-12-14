#ifndef _ZOMBIE_HPP_
# define _ZOMBIE_HPP_

#include <iostream>
class Zombie
{
    private:
        std::string name;

    public:
        Zombie();
        Zombie(std::string);
        ~Zombie();
        void announce( void );
        void setName( std::string );
        std::string getName( void );
};

Zombie* newZombie( std::string );
void    randomChump( std::string );
Zombie* zombieHorde( int N, std::string );

#endif
