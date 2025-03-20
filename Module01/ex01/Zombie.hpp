/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naiqing <naiqing@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 13:38:23 by naiqing           #+#    #+#             */
/*   Updated: 2025/03/18 14:43:58 by naiqing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string name;
		int	count;
	
	public:
		Zombie();
		~Zombie();
		void	announce();
		void	set_name(std::string name1);
};

Zombie	*zombieHorde(int n, std::string name);

#endif