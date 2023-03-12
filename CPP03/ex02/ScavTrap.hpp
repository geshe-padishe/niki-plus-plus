#ifndef _SCAV_TRAP_HPP_
# define _SCAV_TRAP_HPP_

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
    public:
      void attack(const std::string& target);
    	ScavTrap();
	    ScavTrap& operator=( const ScavTrap& );
    	ScavTrap( const ScavTrap &);
      ScavTrap(std::string name);
      ~ScavTrap();
      void guardGate();
};
#endif