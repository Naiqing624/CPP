/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naiqing <naiqing@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 13:38:09 by naiqing           #+#    #+#             */
/*   Updated: 2025/03/18 15:14:55 by naiqing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	count = 1;
	Zombie	*p = zombieHorde(count, "Bob");
	for (int i = 0; i < count; i++)
	{
		p[i].announce();
	}
	delete[] p;
	return (0);
}