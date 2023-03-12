#ifndef _CLAP_TRAP_HPP_
# define _CLAP_TRAP_HPP_

#include <iostream>
#include <cmath>

class ClapTrap
{
	private:
		std::string			_name;
		int			_hit_pts;
		int			_energy_pts;
		int			_atk_pts;

	public:
		ClapTrap();
	    ClapTrap& operator=( const ClapTrap& );
		ClapTrap( const ClapTrap &);
		ClapTrap(std::string name);
		~ClapTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void setHealth(unsigned int health);
		void setEnergy(unsigned int energy);
		void setAttack(unsigned int attack);
		int  getHealth();
		int  getEnergy();
		int  getAttack();
};

#endif	
