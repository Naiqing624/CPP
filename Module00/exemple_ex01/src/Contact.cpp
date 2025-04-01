/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naiqing <naiqing@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 17:37:21 by tblaase           #+#    #+#             */
/*   Updated: 2025/03/14 20:42:38 by naiqing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::_fields_name[5] =
{
	"First Name",
	"Last Name",
	"Nickname",
	"Phone Number",
	"Darkest Secret"
};


Contact::Contact()
{
	//for 循环遍历 FirstName 到 DarkestSecret 之间的所有索引
	//并用 std::string() 初始化每个元素。
	for (int i = FirstName; i <= DarkestSecret; i++)
		this->_informations[i] = std::string();
	return;
}

Contact::~Contact()
{
}

bool	Contact::set_contact()
{
	//从名填到最后一个
	for (int i = FirstName; i <= DarkestSecret; i++)
	{
		//弹出信息
		std::cout << "Please enter the " << Contact::_fields_name[i] << ":\n+";
		//把输入的信息存到informa
		//监督没有输入ctrl + z
		//并监督没有输入空白信息，如果输入了就让他重输
		while ( !(std::getline(std::cin, this->_informations[i])) || this->_informations[i].length() == 0)
		{
			if (std::cin.eof() == true)
			{
				std::cout << "You Pressed ^D. Exiting phonebook now." << std::endl;
				std::exit(0);
			}
			else if (this->_informations[i].length() == 0)
			{
				this->_informations[i].clear();
				std::cout << "\033[31mEmpty contact information not allowed.\033[0m" << std::endl;
				std::cout << "Please enter the " << Contact::_fields_name[i] << ":\n+";
			}
		}
	}
	std::cout << "\033[32mContact added successfully.\033[0m" << std::endl;
	return (true);
}

//在末尾加上const是为了只能读取数据，不能改变对象的状态，不能修改类的成员变量。
void	Contact::get_contact(int index) const
{
	std::cout << "|" << std::setw(10) << index;
	for (int i = FirstName; i <= NickName; i++)
	{
		std::cout << "|";
		if (this->_informations[i].length() > 10)
			//如果字符串超过 10 个字符，就只显示前 9 个字符，并在结尾加 .
			std::cout << this->_informations[i].substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << this->_informations[i];
	}
	std::cout << "|" << std::endl;
}
