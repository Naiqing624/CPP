/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacao <nacao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 08:57:23 by nacao             #+#    #+#             */
/*   Updated: 2025/04/03 15:06:47 by nacao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap    strongOne("Thor");
    strongOne.attack("the enemy");
    strongOne.highFivesGuys();
    for (int i = 0; i < 101; ++i) 
    {
        strongOne.attack("Target Dummy");
    }
    strongOne.beRepaired(20);
    strongOne.takeDamage(80);
    strongOne.takeDamage(50);
    strongOne.attack("Ghost");
    strongOne.beRepaired(10);
}