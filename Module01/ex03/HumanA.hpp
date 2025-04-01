/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacao <nacao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 10:06:00 by naiqing           #+#    #+#             */
/*   Updated: 2025/03/27 14:16:20 by nacao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
	private:
		Weapon	&_Weapon;
		std::string	_name;
		
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void	attack();
};


#endif