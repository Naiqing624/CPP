/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacao <nacao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:34:38 by nacao             #+#    #+#             */
/*   Updated: 2025/04/03 15:34:38 by nacao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
    ScavTrap defender("Alice");
    defender.attack("the intruder");
    defender.guardGate();
    for (int i = 0; i < 51; ++i) 
        defender.attack("Enemy");
    defender.beRepaired(20);
    defender.takeDamage(90);
    defender.takeDamage(15);
    defender.attack("Another Enemy");
	return (0);
}