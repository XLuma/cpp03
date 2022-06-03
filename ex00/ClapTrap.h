//
// Created by Louis-gabriel Laplante on 2022-06-03.
//

#ifndef PISCINE_CP_CLAPTRAP_H
#define PISCINE_CP_CLAPTRAP_H

#include <string>
#include <iostream>

class ClapTrap {

private:
	std::string _name;
	int _hitPoints;
	int _energyPoints;
	int _attackDamage;

public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &clapTrap);
	ClapTrap & operator = (const ClapTrap &rhs);
	~ClapTrap();

	void setName(std::string name);
	std::string getName();

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};


#endif //PISCINE_CP_CLAPTRAP_H
