/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 09:34:59 by marvin            #+#    #+#             */
/*   Updated: 2025/04/04 09:34:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Default")
{
	std::cout << "Animal construtor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destrutor called" << std::endl;
}

Animal::Animal(const Animal &other)
{
	*this = other;
}

Animal	&Animal::operator=(const Animal &other)
{
	if (this != &other)
	{
		this->_type = other.getType();
	}
	return (*this);
}

const std::string	&Animal::getType() const
{
	return (this->_type);
}

void	Animal::makeSound() const
{
	std::cout << "Animal make sounds" << std::endl;
}