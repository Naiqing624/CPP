/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naiqing <naiqing@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 11:00:28 by naiqing           #+#    #+#             */
/*   Updated: 2025/03/18 13:26:26 by naiqing          ###   ########.fr       */
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