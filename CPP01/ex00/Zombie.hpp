#ifndef _ZOMBIE_HPP_
# define _ZOMBIE_HPP_

#include <iostream>
class Zombie
{
    private:
        std::string name;

    public:
        Zombie();
        Zombie(std::string name);
        ~Zombie();
        void announce( void );
        void setName( std::string );
        std::string getName( void );
};

Zombie* newZombie( std::string name );
void    randomChump( std::string name );

#endif
