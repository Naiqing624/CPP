/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacao <nacao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 08:56:56 by nacao             #+#    #+#             */
/*   Updated: 2025/04/03 08:58:20 by nacao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	this->_hitPoint = 10;
	this->_energyPoint = 10;
	this->_attackDamage = 0;
	std::cout << "ClapTrap " << this->_name << " has been created." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	*this = other;
}

ClapTrap	&ClapTrap::operator = (const ClapTrap &other)
{
	if (this != &other)
	{
		this->_name = other._name;
		this->_attackDamage = other._attackDamage;
		this->_energyPoint = other._energyPoint;
		this->_hitPoint = other._hitPoint;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_name << " has been destroyed." << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_hitPoint < 1 || this->_energyPoint < 1)
		std::cout << "Hit Point is " << this->_hitPoint << ". \nEnergy Point is " << this->_energyPoint << ". \nWe cannot attack :(" << std::endl;
	else
	{
		this->_energyPoint -= 1;
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	}
	
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoint == 0)
		std::cout << "Dead" << std::endl;
	else
	{
		if (this->_hitPoint <= (int)amount)
		{
			this->_hitPoint = 0;
			std::cout << "Dead" << std::endl;
		}
		else
		{
			this->_hitPoint -= amount;
			std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
		}
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoint < 1 || this->_energyPoint < 1)
		std::cout << "Hit Point is " << this->_hitPoint << ". \nEnergy Point is " << this->_energyPoint << ". \nWe cannot repair :(" << std::endl;
	else
	{
		this->_hitPoint += amount;
		this->_energyPoint -= 1;
		std::cout << "ClapTrap " << this->_name << " repairs itself, recovering " << amount << " hit points!" << std::endl;
	}
}