/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacao <nacao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 11:50:57 by naiqing           #+#    #+#             */
/*   Updated: 2025/03/27 14:46:01 by nacao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	Bob;
	
	std::cout << "[ DEBUG ]" << std::endl;
	Bob.complain("debug");
	std::cout << "[ INFO ]" << std::endl;
	Bob.complain("info");
	std::cout << "[ WARNING ]" << std::endl;
	Bob.complain("warning");
	std::cout << "[ ERROR ]" << std::endl;
	Bob.complain("error");
	return (0);
}