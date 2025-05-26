/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 10:33:10 by nacao             #+#    #+#             */
/*   Updated: 2025/05/25 21:50:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bool	errorCheck(int argc, char** argv)
{
	if (argc != 2)
	{
		std::cerr << "Error: could not open file." << std::endl;
		return false;
	}
	std::string	filename = argv[1];
	if (filename.size() < 4 || filename.substr(filename.size() - 4) != ".txt")
	{
		std::cerr << "Please entre the right txt file" << std::endl;
		return false;
	}
	// std::ifstream	file(filename.c_str());
	// if (!file.is_open())
	// {
	// 	std::cerr << "Cannot open the file" << std::endl;
	// 	return false;
	// }
	return true;
}

std::string	trim(std::string &s)
{
	size_t	start = s.find_first_not_of(" \t\r\n");
	size_t	end = s.find_last_not_of(" \t\r\n");
	if (start == std::string::npos || end == std::string::npos)
		return "";
	return	s.substr(start, end - start + 1);
}

double	checkPrice(std::string &priceStr)
{
	std::istringstream iss(priceStr);
	double price;
	if (!(iss >> price) || priceStr.empty())
	{
		std::cerr << "Error: no price." << std::endl;
		return -1;
	}
	if (price < 0)
	{
		std::cerr << "Error: not a positive number." << std::endl;
		return -1;
	}

	if (price > 1000)
	{
		std::cerr << "Error: too large a number." << std::endl;
		return -1;
	}
	return price;
}

bool	checkDate(std::string &date)
{
	if (date.length() != 10 || date[4] != '-' || date[7] != '-')
	{
		return false;
	}
	for (int i = 0; i < 10; ++i)
	{
		if (i == 4 || i == 7)
			continue;
		if (!isdigit(date[i]))
		{
			return false;
		}
	}
	//int	year = std::atoi(date.substr(0, 4).c_str());
	int	month = std::atoi(date.substr(5, 2).c_str());
	int	day = std::atoi(date.substr(8, 2).c_str());
	//std::cout << "Year => " << year << " Month => " << month << " Day => "<< day << std::endl;
	if (month < 1 || month > 12)
		return false;
	if (day < 1 || day > 31)
			return false;
	return true;
}

void	checkInput(std::string &line, std::string &date, std::string &priceStr)
{
	size_t	pos = line.find("|");
	if (pos == std::string::npos)
	{
		date = trim(line);
		priceStr = "";
	}
	else
	{
		date = line.substr(0, pos);
		priceStr = line.substr(pos + 1);
		date = trim(date);
		priceStr = trim(priceStr);
	}
}


int	main(int argc, char** argv)
{
	if (!errorCheck(argc, argv))
		return EXIT_FAILURE;
	BitcoinExchange	db;
	db.loadDatabase("data.csv");
	std::ifstream	input(argv[1]);
	std::string	line;
	if (!input.is_open())
	{
		std::cerr << "Cannot open the file" << std::endl;
		return EXIT_FAILURE;
	}
	std::getline(input, line);
	while (std::getline(input, line))
	{
		std::string	date, priceStr;
		checkInput(line, date, priceStr);
		if (!checkDate(date))
		{
			std::cerr << "Error: bad input => " << date << std::endl;
			continue;
		}
		double	price = checkPrice(priceStr);
		if (price != -1 && db.findPriceByDate(date) != -1)
		{
			std::cout  << date << " => " << price << " = " << price * db.findPriceByDate(date) << std::endl;
			continue;
		}
	}
	return EXIT_FAILURE;
}