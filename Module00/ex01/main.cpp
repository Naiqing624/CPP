/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacao <nacao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 19:35:05 by naiqing           #+#    #+#             */
/*   Updated: 2025/03/13 14:48:12 by nacao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phoneBook.hpp"

int	main(void)
{
	Contact person;
	phoneBook phoneBook;
	std::string	cmd;

	while(1)
	{
		std::cout << "Please entre cmd (ADD, SEARCH, EXIT)" << std::endl;
		std::cin >> cmd;

		if (cmd == "ADD")
		{
			phoneBook.addContact();
		}
		else if (cmd == "SEARCH")
		{
			phoneBook.displayContact();
		}
		else if (cmd == "EXIT")
		{
			std::cout << "..." << std::endl;
		}
	}
	return (0);
}