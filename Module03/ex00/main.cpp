/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 20:45:16 by marvin            #+#    #+#             */
/*   Updated: 2025/03/29 20:45:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	Bob("Bob");

	Bob.attack("42");
	Bob.takeDamage(9);
	Bob.attack("42");
	Bob.takeDamage(2);
	Bob.beRepaired(5);
	return (0);
}