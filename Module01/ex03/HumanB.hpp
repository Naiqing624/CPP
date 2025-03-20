/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naiqing <naiqing@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 10:06:31 by naiqing           #+#    #+#             */
/*   Updated: 2025/03/20 14:54:41 by naiqing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		Weapon	*_Weapon;
		std::string	_name;
		
	public:
		HumanB(std::string name);
		~HumanB();
		//public methode
		void	attack();
		void	setWeapon(Weapon &Weapon); 
		/*int a = 10;
		int *b = &a; 这样的话b才能输出10*/
};

#endif
