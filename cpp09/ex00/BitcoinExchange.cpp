/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 10:33:10 by nacao             #+#    #+#             */
/*   Updated: 2025/05/25 21:16:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(const std::string	&file)
{
	loadDatabase(file);
}

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::~BitcoinExchange()
{
}

int	BitcoinExchange::loadDatabase(const std::string &filename)
{
	std::ifstream	file(filename.c_str());
	if (!file.is_open())
	{
		std::cerr << "Cannot open Database file" << std::endl;
		return EXIT_FAILURE;
	}
	std::string	line;
	std::getline(file, line);
	while (std::getline(file, line))
	{
		//std::cout << "Reading Data Row => " << line << std::endl;
		std::string	before = line.substr(0, line.find(","));
		std::string afterStr = line.substr(line.find(",") + 1);
		std::istringstream iss(afterStr);
		double after;
		iss >> after;
		std::cout << std::setprecision(10);
		//std::cout << "Key => " << before << ", Value=> " << after << std::endl;
		this->_priceDB[before] = after;
	}
	file.close();
	return 0;
}

double	BitcoinExchange::findPriceByDate(const std::string	&date)
{
	std::map<std::string, double> m = this->_priceDB;
	std::map<std::string, double>::iterator it = m.find(date);
	if (it != m.end())
	{
		//std::cout << "FIND! Key => " << it->first << ", Value=> " << it->second << std::endl;
		return it->second;
	}
	else
	{
		it = m.upper_bound(date);
		if (it == m.begin())
		{
			std::cerr << "Error. No earlier data" << std::endl;
		}
		else
		{
			--it;
			//std::cout << "LOWER DAY FIND! Key => " << it->first << ", Value=> " << it->second << std::endl;
			return it->second;
		}
	}
	return -1;
}


