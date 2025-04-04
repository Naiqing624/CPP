/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 10:50:31 by marvin            #+#    #+#             */
/*   Updated: 2025/04/04 10:50:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
	std::cout << "Dog construtor called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog destrutor called" << std::endl;
	delete _brain;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	this->_type = other._type;
	this->_brain = new Brain(*other._brain); 
}

Dog	&Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		this->_type = other.getType();
		delete this->_brain;
		this->_brain = new Brain(*other._brain);
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Woof!" << std::endl;
}

const std::string	&Dog::getIdea(int i) const
{
	return (this->_brain->getIdea(i));
}

void	Dog::setIdea(int i, std::string text)
{
	this->_brain->setIdea(i, text);
}
