/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacao <nacao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 13:17:36 by nacao             #+#    #+#             */
/*   Updated: 2025/04/03 15:08:16 by nacao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "Diamond Trap is created" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
    this->_name = name;
    this->_hitPoint = 100;
    this->_energyPoint = 50;
    this->_attackDamage = 30;
    // this->_hitPoint = FragTrap::_hitPoint;
    // this->_energyPoint = ScavTrap::_energyPoint;
    // this->_attackDamage = FragTrap::_attackDamage;
    std::cout << "Diamond Trap is created" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
{
    *this = other;
}

DiamondTrap &DiamondTrap::operator = (const DiamondTrap &other)
{
    if (this != &other)
	{
		this->_name = other._name;
        this->ClapTrap::_name = other.ClapTrap::_name;
		this->_attackDamage = other._attackDamage;
		this->_energyPoint = other._energyPoint;
		this->_hitPoint = other._hitPoint;
	}
    return (*this);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Diamond Trap  has been destroyed" << std::endl;
}

void    DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI()
{
    std::cout << "Diamond name -> " << this->_name << ". \nClapTrap -> " << ClapTrap::_name << std::endl;  
}