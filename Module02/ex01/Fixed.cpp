/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naiqing <naiqing@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 15:22:43 by naiqing           #+#    #+#             */
/*   Updated: 2025/03/26 11:28:22 by naiqing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//constructor

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_rawBits = 0;
}

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called" << std::endl;
	this->_rawBits = num << Fixed::_fractionalBits;
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
	this->_rawBits = (int)roundf(num * (1 << Fixed::_fractionalBits));
}

//copy constructor

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_rawBits = other._rawBits;
}

//copy assignment

Fixed &Fixed::operator = (const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_rawBits = other._rawBits;
	}
	return (*this);
}

//destructor
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	return (this->_rawBits);
}

void	Fixed::setRawBits(int const raw)
{
	this->_rawBits = raw;
}

//menber function

float	Fixed::toFloat(void) const
{
	float	floatNum;
	
	floatNum = (float)this->_rawBits / (float)(1 << Fixed::_fractionalBits);
	return (floatNum);
}

int		Fixed::toInt(void) const
{
	int		intNum;

	intNum = this->_rawBits >> Fixed::_fractionalBits;
	return (intNum);
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return (out);
}
