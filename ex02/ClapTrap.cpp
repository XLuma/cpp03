//
// Created by Louis-gabriel Laplante on 2022-06-03.
//

#include "ClapTrap.h"

ClapTrap::ClapTrap() {
	std::cout << "Default ClapTrap constructor called" << std::endl;
	//default constructor
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name) {
	std::cout << "ClapTrap name constructor called" << std::endl;
	_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap) {
	_name = clapTrap._name;
	_attackDamage = clapTrap._attackDamage;
	_hitPoints = clapTrap._hitPoints;
	_energyPoints = clapTrap._energyPoints;
	std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap & ClapTrap::operator=(const ClapTrap &rhs) {
	if (this == &rhs)
		return *this;
	_name = rhs._name;
	_attackDamage = rhs._attackDamage;
	_hitPoints = rhs._hitPoints;
	_energyPoints = rhs._energyPoints;
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap deconstructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target) {
	if (this->_energyPoints != 0 && this->_hitPoints != 0) {
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage
				  << " damage !" << std::endl;
		this->_energyPoints -= 1;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name << " is no longer able to attack !" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " damage !" << std::endl;
	this->_hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_energyPoints != 0 && this->_hitPoints != 0) {
		std::cout << "ClapTrap " << this->_name << " repairs itself and regains " << amount << " of HP !"
				  << std::endl;
		this->_energyPoints -= 1;
		this->_hitPoints += amount;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name << " is no longer able to repair !" << std::endl;
	}
}

void ClapTrap::setName(std::string name) {
	this->_name = name;
}

std::string ClapTrap::getName() {
	return this->_name;
}

int ClapTrap::getEnergyPoints() {
	return this->_energyPoints;
}

int ClapTrap::getHitPoints() {
	return this->_hitPoints;
}