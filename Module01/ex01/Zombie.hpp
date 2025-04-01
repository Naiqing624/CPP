/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacao <nacao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 13:38:23 by naiqing           #+#    #+#             */
/*   Updated: 2025/03/27 14:04:01 by nacao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string name;
	
	public:
		Zombie();
		~Zombie();
		void	announce();
		void	set_name(std::string name1);
};

Zombie	*zombieHorde(int N, std::string name);

#endif
