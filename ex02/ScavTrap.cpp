//
// Created by Louis-gabriel Laplante on 2022-06-06.
//

#include "ScavTrap.h"

ScavTrap::ScavTrap() {
	std::cout << "Default ScavTrap constructor called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) {
	std::cout << "Name ScavTrap constructor called" << std::endl;
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &scavTrap) {
	_name = scavTrap._name;
	_hitPoints = scavTrap._hitPoints;
	_energyPoints = scavTrap._energyPoints;
	_attackDamage = scavTrap._attackDamage;
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &rhs) {
	if (this == &rhs)
		return *this;
	_name = rhs._name;
	_attackDamage = rhs._attackDamage;
	_hitPoints = rhs._hitPoints;
	_energyPoints = rhs._energyPoints;
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap deconstructor called" << std::endl;
}

void ScavTrap::attack(const std::string &target) {
	if (this->_energyPoints != 0 && this->_hitPoints != 0) {
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage
				  << " damage !" << std::endl;
		this->_energyPoints -= 1;
	}
	else
	{
		std::cout << "ScavTrap " << this->_name << " is no longer able to attack !" << std::endl;
	}
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->_name << " entered Gate Keeper mode" << std::endl;
}