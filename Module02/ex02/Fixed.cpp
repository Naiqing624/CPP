/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naiqing <naiqing@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 11:33:39 by naiqing           #+#    #+#             */
/*   Updated: 2025/03/26 11:47:09 by naiqing          ###   ########.fr       */
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
	
}

Fixed::~Fixed()
{
	
}

int	Fixed::toInt(void) const
{
	
}

float	Fixed::toFloat(void) const
{
	
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}