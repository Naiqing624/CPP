/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naiqing <naiqing@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 11:16:21 by naiqing           #+#    #+#             */
/*   Updated: 2025/03/24 13:39:03 by naiqing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl	Bob;
	
	if (argc != 2)
	{
		std::cout << "Please enter the right arguments" << std::endl;
		return (1);
	}
	Bob.complain(argv[1]);
	return (0);
}