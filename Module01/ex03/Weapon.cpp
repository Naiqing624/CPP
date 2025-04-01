/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacao <nacao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 10:05:36 by naiqing           #+#    #+#             */
/*   Updated: 2025/03/27 14:10:49 by nacao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &Weapon)
{
	this->_type = Weapon;
}

Weapon::~Weapon()
{
	
}

std::string	Weapon::getType() const
{
	return (this->_type);
}

void	Weapon::setType(const std::string &Weapon)
{
	this->_type = Weapon;
}