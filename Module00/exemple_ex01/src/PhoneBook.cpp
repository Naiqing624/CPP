/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naiqing <naiqing@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 17:08:31 by tblaase           #+#    #+#             */
/*   Updated: 2025/03/16 13:44:48 by naiqing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->_index = 0;
	this->_full = false;
	return;
}

PhoneBook::~PhoneBook(void)
{
	return;
}

// 让用户添加联系人到电话簿。
// 如果电话簿未满，直接添加联系人。
// 如果电话簿已满，提示用户是否删除第一个联系人（FIFO 规则）并添加新联系人。
// 如果用户按 Ctrl+D（EOF），程序直接退出。
void	PhoneBook::set_information(void)
{
	std::string input;
	if (this->_full == false)
	{
		std::cout << "This is your contact #" << this->_index + 1 << std::endl;
		if (this->_contacts[this->_index].set_contact() == true)
		{
			if (this->_index == 7)
				this->_full = true;
			else
				this->_index++;
		}
	}
	else
	{
		std::cout << "Your phonebook is full.\nIf you want to add a new contact, i am going to delete the first contact i stored, index #1." << std::endl;
		std::cout << "If you want to proceed, press '1' and confirm with 'enter',\nif not press anything but '1' and confirm with 'enter' to go back to main menu." << std::endl;
		std::cout << "Your choice: ";
		getline(std::cin, input);
		if (std::cin.eof() == true)
		{
			std::cout << "You Pressed ^D. Exiting phonebook now." << std::endl;
			std::exit(0);
		}
		else if (input.compare("1") == 0)
		{
			//把所有联系人向前移动 1 个位置（FIFO 规则）
			for (int i = 1; i < 8; i++)
				this->_contacts[i - 1] = this->_contacts[i];
			std::cout << "This is your contact #8" << std::endl;
			//让用户输入新联系人信息，存入 this->_contacts[7]（原 8 号位置）
			this->_contacts[this->_index].set_contact();
		}
		else
			std::cout << "Back to main menu without deleting and creating a contact." << std::endl;
	}
}


// 让用户查询电话簿中的联系人信息。
// 如果电话簿为空，提示用户先添加联系人。
// 要求用户输入联系人索引（1~8），如果输入无效，提示重新输入。
// 正确输入后，显示对应的联系人信息。
// 如果用户输入 0，退出搜索模式。
// 如果用户按 Ctrl+D（EOF），程序退出。

void	PhoneBook::get_information() const
{
	int	index;

	if (this->_index == 0)
		std::cout << "\033[31mPlease add at least one contact before searching.\033[0m" << std::endl;
	else
	{
		std::string input;
		std::cout << "Please tell me which contact index i should show you. (0 to quit searching)\nIndex: ";
		//std::atoi(input.c_str()) 将字符串转换为整数
		//std::atoi(input.c_str()) - 1 >= this->_index && this->_full == false
		//如果电话簿未满，但用户输入了超出范围的索引，提示错误。
		while (!(std::getline(std::cin, input)) || input.length() > 1 || input.compare("0") < 0 || input.compare("8") > 0 || (std::atoi(input.c_str()) -1 >= this->_index && this->_full == false))
		{
			if (std::cin.eof() == true)
			{
				std::cout << "You Pressed ^D. Exiting phonebook now." << std::endl;
				std::exit(0);
			}
			//处理无效输入（索引超范围）
			else if (input.length() > 1 || input.compare("0") < 0 || input.compare("8") > 0)
			{
				std::cin.clear();
				std::cout << "\033[31mOnly digits in range of 1 to 8 are allowed.\033[0m\n";
				std::cout << "Please tell me which contact i should show you. (0 to quit searching)\nIndex: ";
			}
			//用户索引超过已存的联系人数量
			else if (std::atoi(input.c_str()) - 1 >= this->_index && this->_full == false)
			{
				std::cout << "\033[33mYou only have " << this->_index << " Contacts saved.\033[0m" << std::endl;
				std::cin.clear();
				std::cout << "Please tell me which contact i should show you. (0 to quit searching)\nIndex: ";
			}
		}
		index = std::atoi(input.c_str());
		if (index > 0)
		{
			std::cout << "|-------------------------------------------|" << std::endl;
			std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
			std::cout << "|----------|----------|----------|----------|" << std::endl;
			this->_contacts[index - 1].get_contact(index);
			std::cout << "|-------------------------------------------|" << std::endl;
		}
		else
			std::cout << "Exiting search mode now." << std::endl;
	}
}

void	PhoneBook::show_instruction(void)
{
	std::cout << "\033[KEnter your command [ADD, SEARCH, EXIT]:" << std::endl;
}
