/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacao <nacao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:03:47 by nacao             #+#    #+#             */
/*   Updated: 2025/04/03 15:03:47 by nacao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ClapTrap.hpp"

// int	main(void)
// {
// 	ClapTrap	Bob("Bob");

// 	Bob.attack("42");
// 	Bob.takeDamage(9);
// 	Bob.attack("42");
// 	Bob.takeDamage(2);
// 	Bob.beRepaired(5);
// 	return (0);
// }

#include "ClapTrap.hpp"
#include <iostream>

int main()
{
    std::cout << "🛠️" << std::endl;
    ClapTrap bob("Bob");

    std::cout << "\n" << std::endl;
    bob.attack("Target Dummy");

    std::cout << "\n💥 " << std::endl;
    bob.takeDamage(3);

    std::cout << "\n💉 " << std::endl;
    bob.beRepaired(2);

    std::cout << "\n🔁" << std::endl;
    for (int i = 0; i < 10; ++i)
    {
        bob.attack("Another Dummy");
    }

    std::cout << "\n💤 " << std::endl;
    bob.attack("Out of energy");
    bob.beRepaired(5);

    std::cout << "\n☠️ " << std::endl;
    bob.takeDamage(20);

    std::cout << "\n❌" << std::endl;
    bob.attack("Ghost");
    bob.beRepaired(10);

    std::cout << "\n🧹" << std::endl;
    return 0;
}
