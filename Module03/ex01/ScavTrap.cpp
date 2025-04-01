/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 18:45:48 by marvin            #+#    #+#             */
/*   Updated: 2025/03/30 18:45:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{

}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap " << this->_name << " enters the battlefield!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_name << " destroyed" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	*this = other;
}

ScavTrap	&ScavTrap::operator = (const ScavTrap &other)
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

void	ScavTrap::attack(const std::string &target)
{
	if (this->_hitPoint < 1 || this->_energyPoint < 1)
		std::cout << "(ScavTrap)Hit Point is " << this->_hitPoint << ". \nEnergy Point is " << this->_energyPoint << ". \nWe cannot attack :(" << std::endl;
	else
	{
		this->_energyPoint -= 1;
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	}
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}