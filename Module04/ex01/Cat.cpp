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
	this->_brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat destrutor called" << std::endl;
	delete _brain;
}

Cat::Cat(const Cat &other) : Animal(other)
{
	this->_type = other._type;
	this->_brain = new Brain(*other._brain); 
}

Cat	&Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		this->_type = other.getType();
		delete _brain;
		this->_brain = new Brain(*other._brain);
	}
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Miaou~" << std::endl;
}