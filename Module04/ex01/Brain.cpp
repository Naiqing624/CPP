/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naiqing <naiqing@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 19:14:58 by naiqing           #+#    #+#             */
/*   Updated: 2025/04/04 20:57:05 by naiqing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain construtor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destrutor called" << std::endl;
}

Brain::Brain(const Brain &other)
{
	for (int i = 0; i < 100; i++)
			this->_ideas[i] = other._ideas[i];
}

Brain	&Brain::operator=(const Brain &other)
{
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = other._ideas[i];
	}
	return (*this);
}

const std::string	&Brain::getIdea(int i) const
{
	return (this->_ideas[i]);
}

void	Brain::setIdea(int i, std::string text)
{
	if (i < 0 || i > 100)
	{
		std::cout << "Do not have so many ideas" << std::endl;
	}
	this->_ideas[i] = text;
}