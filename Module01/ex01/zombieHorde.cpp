/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacao <nacao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 13:38:49 by naiqing           #+#    #+#             */
/*   Updated: 2025/03/27 14:03:50 by nacao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie *hordeZombie = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		hordeZombie[i].set_name(name);
	}
	return (hordeZombie);
}