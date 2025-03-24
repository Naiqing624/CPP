/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naiqing <naiqing@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 11:50:57 by naiqing           #+#    #+#             */
/*   Updated: 2025/03/24 11:05:13 by naiqing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl	Bob;

	Bob.complain("debug");
	Bob.complain("info");
	Bob.complain("warning");
	Bob.complain("error");
	Bob.complain("123");
	std::cout << "--------------------" << std::endl;
	(void)argc;
	Bob.complain(argv[1]);
	return (0);
}