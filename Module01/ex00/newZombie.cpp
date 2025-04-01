/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacao <nacao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 11:00:28 by naiqing           #+#    #+#             */
/*   Updated: 2025/03/27 13:42:16 by nacao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//use heap to creat a zombie, for a long-lived obj
//use new to allocate memory
Zombie *newZombie(std::string name)
{
	Zombie *heapZombie = new Zombie(name);
	heapZombie->announce();
	return (heapZombie);
}