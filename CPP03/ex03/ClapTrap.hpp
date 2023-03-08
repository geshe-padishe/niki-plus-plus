#ifndef _CLAP_TRAP_HPP_
# define _CLAP_TRAP_HPP_

#include <iostream>
#include <cmath>

class ClapTrap
{
	protected:
		std::string			_name;
		int			_hit_pts;
		int			_energy_pts;
		int			_atk_pts;
	public:
		int max_hp;
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void setHealth(unsigned int health);
		void setEnergy(unsigned int energy);
		void setAttack(unsigned int attack);
		std::string getName();
		int  getHealth();
		int  getEnergy();
		int  getAttack();
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap();
};

#endif
