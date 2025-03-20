/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naiqing <naiqing@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 11:00:33 by naiqing           #+#    #+#             */
/*   Updated: 2025/03/18 13:24:56 by naiqing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//use stack to creat a zombie, for temporary objs
void	randomChump(std::string name)
{
	Zombie	stackZombie(name);
	stackZombie.announce();
}