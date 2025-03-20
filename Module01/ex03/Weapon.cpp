/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naiqing <naiqing@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 10:05:36 by naiqing           #+#    #+#             */
/*   Updated: 2025/03/20 14:25:07 by naiqing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string	&Weapon)
{
	this->_type = Weapon;
}

Weapon::~Weapon()
{
	
}

std::string	Weapon::getType() const // `const` 确保 `getter` 不修改成员变量
{
	return (this->_type); // 返回 `std::string`，不会有悬空引用
}

void	Weapon::setType(const std::string	&Weapon)
{
	this->_type = Weapon;
}