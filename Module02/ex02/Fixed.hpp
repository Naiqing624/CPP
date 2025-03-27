/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naiqing <naiqing@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 11:33:27 by naiqing           #+#    #+#             */
/*   Updated: 2025/03/26 11:46:44 by naiqing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmatch>

class Fixed
{
	private:
		int					_rawBits;
		static const int	_fractionalBits;
	
	public:
		Fixed();
		Fixed(const int num);
		Fixed(const float num);
		Fixed(const Fixed &other);
		~Fixed();
		//member function
		int		toInt(void) const;
		float	toFloat(void) const;
		
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif