/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naiqing <naiqing@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 19:35:05 by naiqing           #+#    #+#             */
/*   Updated: 2025/03/16 19:44:51 by naiqing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phoneBook.hpp"

void	show_instruction()
{
	std::cout << "Please entre your command [ADD, SEARCH, EXIT] : " << std::endl;
}

int	main(void)
{
	PhoneBook 	phoneBook;
	std::string	cmd;
	bool		run = true;

	show_instruction();
	while (run && std::getline(std::cin, cmd))
	{
		if (std::cin.eof())
		{
			std::cout << "You pressed ctrl + D, Exiting now" << std::endl;
			exit (0);
		}
		else if (cmd == "ADD")
			phoneBook.addContactInfo();
		else if (cmd == "SEARCH")
			phoneBook.getPhonebookInfo();
		else if (cmd == "EXIT")
		{
			std::cout << "Good bye" << std::endl;
			run = false;
			continue;
		}
		cmd.clear();
		show_instruction();
	}
	return (0);
}