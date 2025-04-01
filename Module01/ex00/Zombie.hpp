/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacao <nacao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 10:04:37 by naiqing           #+#    #+#             */
/*   Updated: 2025/03/27 13:42:26 by nacao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class	Zombie
{
	private:
		std::string	name;
	
	public:
		Zombie(std::string name);
		~Zombie();
		void	announce(void);
};

Zombie *newZombie(std::string name);
void	randomChump(std::string name);

#endif
