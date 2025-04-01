/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacao <nacao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 13:38:09 by naiqing           #+#    #+#             */
/*   Updated: 2025/03/27 14:06:49 by nacao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	count = 3;
	Zombie	*p = zombieHorde(count, "Bob");
	for (int i = 0; i < count; i++)
	{
		p[i].announce();
	}
	delete[] p;
	return (0);
}