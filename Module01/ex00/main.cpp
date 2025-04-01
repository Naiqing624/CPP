/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacao <nacao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 09:50:23 by naiqing           #+#    #+#             */
/*   Updated: 2025/03/27 13:41:56 by nacao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*heapZombie = newZombie("Bob(heap)");
	randomChump("Bob(stack)");
	delete heapZombie;
	return (0);
}