/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 11:33:39 by naiqing           #+#    #+#             */
/*   Updated: 2025/03/28 20:59:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->_rawBits = 0;
}

Fixed::Fixed(const int num)
{
	this->_rawBits = num << Fixed::_fractionalBits;
}

Fixed::Fixed(const float num)
{
	this->_rawBits = (int)roundf(num * (1 << Fixed::_fractionalBits));
}

Fixed::Fixed(const Fixed &other)
{
	this->_rawBits = other._rawBits;
}

Fixed &Fixed::operator = (const Fixed &other)
{
	if (this != &other)
		this->_rawBits = other._rawBits;
	return (*this);
}

Fixed::~Fixed()
{
	
}

int	Fixed::toInt(void) const
{
	return (this->_rawBits >> Fixed::_fractionalBits);
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_rawBits / (float)(1 << Fixed::_fractionalBits));
}

//comparison operator
bool	Fixed::operator<(const Fixed &other) const
{
	return (this->_rawBits < other._rawBits);
}

bool	Fixed::operator>(const Fixed &other) const
{
	return (this->_rawBits > other._rawBits);
}

bool	Fixed::operator<=(const Fixed &other) const
{
	return (this->_rawBits <= other._rawBits);
}

bool	Fixed::operator>=(const Fixed &other) const
{
	return (this->_rawBits >= other._rawBits);
}

bool	Fixed::operator==(const Fixed &other) const
{
	return (this->_rawBits == other._rawBits);
}

bool	Fixed::operator!=(const Fixed &other) const
{
	return (this->_rawBits != other._rawBits);
}

//arithmetic operator
Fixed	Fixed::operator+(const Fixed &other) const
{
	Fixed	result;
	result._rawBits  = this->_rawBits + other._rawBits;
	return (result);
}

Fixed	Fixed::operator-(const Fixed &other) const
{
	Fixed	result;
	result._rawBits  = this->_rawBits - other._rawBits;
	return (result);
}

Fixed	Fixed::operator*(const Fixed &other) const
{
	Fixed	result;
	result._rawBits  = (this->_rawBits * other._rawBits) >> Fixed::_fractionalBits;
	return (result);
}

Fixed	Fixed::operator/(const Fixed &other) const
{
	Fixed	result;
	result._rawBits  = (this->_rawBits << Fixed::_fractionalBits) / other._rawBits;
	return (result);
}

//increment/decrement 
//++a
Fixed	&Fixed::operator++()
{
	this->_rawBits += 1;
	return (*this);
}

//a++
Fixed	Fixed::operator++(int)
{
	Fixed	copy = *this;
	this->_rawBits++;
	return (copy);
}

//--a
Fixed	&Fixed::operator--()
{
	this->_rawBits -= 1;
	return (*this);
}

//a--
Fixed	Fixed::operator--(int)
{
	Fixed	copy = *this;
	this->_rawBits--;
	return (copy);
}


//overloaded menber funtion
Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a < b)
		return (b);
	else
		return (a);
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (b);
	else
		return (a);
}


std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}