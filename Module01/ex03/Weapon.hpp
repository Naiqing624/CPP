/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacao <nacao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 10:05:23 by naiqing           #+#    #+#             */
/*   Updated: 2025/03/27 14:10:25 by nacao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
	private:
		std::string	_type;
	
	public:
		//constructor
		Weapon(const std::string	&Weapon);
		//deconstructor
		~Weapon();
		//getter only read
		std::string	getType() const;
		//setter
		void	setType(const std::string &Weapon);
		//public methode
};

#endif