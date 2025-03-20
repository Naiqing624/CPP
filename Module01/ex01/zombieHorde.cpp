/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naiqing <naiqing@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 13:38:49 by naiqing           #+#    #+#             */
/*   Updated: 2025/03/18 15:14:41 by naiqing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int n, std::string name)
{
	Zombie *hordeZombie = new Zombie[n];
	for (int i = 0; i < n; i++)
	{
		hordeZombie[i].set_name(name);
	}
	return (hordeZombie);
}