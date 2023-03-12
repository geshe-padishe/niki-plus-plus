#ifndef _FRAG_TRAP_HPP_
# define _FRAG_TRAP_HPP_

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
    public:
    	FragTrap();
	    FragTrap& operator=( const FragTrap& );
    	FragTrap( const FragTrap &);
      FragTrap(std::string name);
      ~FragTrap();
      void highFivesGuys();
};
#endif