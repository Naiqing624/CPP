/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 10:50:28 by marvin            #+#    #+#             */
/*   Updated: 2025/04/04 10:50:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->_type = "Cat";
	std::cout << "Cat construtor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destrutor called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Miaou~" << std::endl;
}