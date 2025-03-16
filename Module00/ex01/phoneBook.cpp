/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naiqing <naiqing@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 19:42:52 by naiqing           #+#    #+#             */
/*   Updated: 2025/03/16 20:53:56 by naiqing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

PhoneBook::PhoneBook()
{
    this->full = false;
	this->index = 0;
}

PhoneBook::~PhoneBook()
{
	
}

void    PhoneBook::addContactInfo()
{
	std::string	input;
	
    if (this->full == false)
    {
        std::cout << "N." << this->index + 1 << std::endl;
		if(this->contacts[this->index].setContact())
		{
			if (this->index == 7)
				this->full = true;
			else
				this->index += 1;
		}
    }
    else
    {
        std::cout << "Your phonebook is full." << std::endl;
		std::cout << "If you want to delete the frist contact to add one, plese entre '1',if you don't want to delete the frist one, plese just presse 'entre', the program will return to main menu" << std::endl;
		getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cout << "You pressed ctrl + d, exiting phonebook now" << std::endl;
			exit (0);
		}
		else if (input == "1")
		{
			std::cout << "Deleting the frist contact" << std::endl;
			for (int i = 1; i < 8; i++)
				this->contacts[i - 1] = this->contacts[i];
			std::cout << "Deleted successefully \nHere is N.8" << std::endl;
			this->contacts[7].setContact();
		}
		else
		{
			std::cout << "Back to the main menu" << std::endl;
		}
    }
}

void    PhoneBook::getPhonebookInfo() const
{
	int	local_index;
	
    if (this->index == 0)
    {
        std::cout << "Phonebook is ampty, please add at least one contact" << std::endl;
    }
	else
	{
		std::string	input;
		std::cout << "Which contact your want to look? Please entre the numero: " << std::endl;
		while (!(std::getline(std::cin, input)) || input.compare("0") <= 0 || input.compare("8") > 0 || (std::atoi(input.c_str()) - 1 >= this->index && this->full == false))
		{
			if (std::cin.eof())
			{
				std::cout << "You pressed ctrl + D, Exiting now" << std::endl;
				exit (0);
			}
			else if (input.compare("0") <= 0 || input.compare("8") > 0)
			{
				std::cin.clear();
				std::cout << "Wrong number, please entre between 1-8" << std::endl;
			}
			else if (std::atoi(input.c_str()) - 1 >= this->index && this->full == false)
			{
				std::cout << "You have just " << this->index << " contacts saved. Please entre between 1 - " << this->index << std::endl;
				std::cin.clear();
			}
		}
		local_index = std::atoi(input.c_str());
		if (local_index > 0)
		{
			this->contacts[local_index - 1].display();
		}
	}
}
