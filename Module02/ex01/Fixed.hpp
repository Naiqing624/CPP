/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naiqing <naiqing@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 15:23:45 by naiqing           #+#    #+#             */
/*   Updated: 2025/03/26 10:23:57 by naiqing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					_rawBits;
		static const int	_fractionalBits = 8;
	
	public:
		//constructor
		Fixed();
		Fixed(int num);
		Fixed(float num);
		Fixed(const Fixed &other);

		//copy assignment
		Fixed &operator = (const Fixed &other);

		//destructor
		~Fixed();

		//getter & setter
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		
		//menber function
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);


#endif