/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacao <nacao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 10:06:47 by naiqing           #+#    #+#             */
/*   Updated: 2025/03/27 14:23:51 by nacao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name)
{
}

HumanB::~HumanB()
{
}

void	HumanB::attack()
{
	std::cout << this->_name << " attacks with their " << this->_Weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &Weapon)
{
	this->_Weapon = &Weapon;
}