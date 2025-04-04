/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 11:37:13 by marvin            #+#    #+#             */
/*   Updated: 2025/04/04 11:37:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	_type = "WRONG";
	std::cout << "WRONG construtor" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WRONG desturtor" << std::endl;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WRONG make sounds" << std::endl;
}

const std::string &WrongAnimal::getType() const
{
	return (this->_type);
}