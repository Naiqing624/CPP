/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naiqing <naiqing@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 11:49:36 by nacao             #+#    #+#             */
/*   Updated: 2025/03/16 20:32:45 by naiqing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

//初始化构造函数
Contact::Contact()
{
	for (int i = FristName; i <= DarkestSecret; i++)
		this->info[i] = std::string();
}

Contact::~Contact()
{
	
}

std::string	Contact::fieldName[5] = 
{
	"first name", 
	"last name", 
	"nickname",
	"phone number",
	"darkest secret"
};

bool	Contact::setContact()
{
	for (int i = FristName; i <= DarkestSecret; i++)
	{
		std::cout << "Please enter the " << this->fieldName[i] << ": \n";
		while (!(std::getline(std::cin, this->info[i])) || this->info[i].length() == 0)
		{
			if (std::cin.eof())
			{
				std::cout << "You pressed ctrl + D, Exiting now" << std::endl;
				exit (0);
			}
			if (this->info[i].length() == 0)
			{
				this->info[i].clear();
				std::cout << "Empty space is not allowed, please entre again right " << this->fieldName[i] << ": \n";
			}
		}
	}
	std::cout << "Contact added successfully." << std::endl;
	return (true);
}

void	Contact::display()const
{
	for (int i = FristName; i <= DarkestSecret; i++)
	{
		if (this->info[i].length() > 10)
			std::cout << this->fieldName[i] << ": "<< this->info[i].substr(0, 9) << "." << std::endl;
		else
			std::cout << this->fieldName[i] << ": " << this->info[i] << std::endl;
	}
}