#ifndef _SCAV_TRAP_HPP_
# define _SCAV_TRAP_HPP_

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
    public:
      ScavTrap(std::string name);
      ~ScavTrap();
      void guardGate();
};
#endif