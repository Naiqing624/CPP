/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacao <nacao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 10:06:19 by naiqing           #+#    #+#             */
/*   Updated: 2025/03/27 14:23:46 by nacao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _Weapon(weapon)
{
	this->_name = name;
}

HumanA::~HumanA()
{
}

void	HumanA::attack()
{
	std::cout << this->_name << " attacks with their " << _Weapon.getType() << std::endl;
}