/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacao <nacao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 13:16:05 by nacao             #+#    #+#             */
/*   Updated: 2025/04/03 14:46:19 by nacao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap dt("Thor");

    std::cout << "\n🔫:" << std::endl;
    dt.attack("Loki");

    std::cout << "\n🧠:" << std::endl;
    dt.whoAmI();

    std::cout << "\n🔁:" << std::endl;
    for (int i = 0; i < 51; ++i)
    {
        dt.attack("Dummy");
    }

    std::cout << "\n💉:" << std::endl;
    dt.beRepaired(30);

    std::cout << "\n💥:" << std::endl;
    dt.takeDamage(80);
    dt.takeDamage(50);

    std::cout << "\n❌:" << std::endl;
    dt.attack("Ghost");
    dt.beRepaired(20);

    std::cout << "\n🧹:" << std::endl;
    return 0;
}
