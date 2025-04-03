/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacao <nacao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 08:57:38 by nacao             #+#    #+#             */
/*   Updated: 2025/04/03 14:57:03 by nacao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->_hitPoint = 100;
    this->_energyPoint = 100;
    this->_attackDamage = 30;
    std::cout << "FrapTrap is created" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other)
{
    *this = other;
}

FragTrap    &FragTrap::operator=(const FragTrap &other)
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

FragTrap::~FragTrap()
{
    std::cout << "FrapTrap is destroy" << std::endl;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "HIGH FIVES!" << std::endl;
}

void	FragTrap::attack(const std::string &target)
{
	if (this->_hitPoint < 1 || this->_energyPoint < 1)
		std::cout << "(FrapTrap)Hit Point is " << this->_hitPoint << ". \nEnergy Point is " << this->_energyPoint << ". \nWe cannot attack :(" << std::endl;
	else
	{
		this->_energyPoint -= 1;
		std::cout << "FrapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	}
	
}