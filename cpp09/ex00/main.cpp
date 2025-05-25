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

// std::string	trim(std::string &s)
// {
// 	size_t
// }

// bool	checkInput(std::string	&line)
// {
// 	std::string	
// 	if (line.size() != )
// 	{
		
// 	}
// 	else if ()
// 	{
		
// 	}
// }

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
		//现在输出的问题是 空格没有处理好 明天要做上面的trim
		size_t	pos = line.find("|");
		if (pos == std::string::npos)
		{
			date = line;
			priceStr = "";
		}
		else
		{
			date = line.substr(0, pos);
			priceStr = line.substr(pos + 1);
		}
		std::cout << "Date => " << date << ", PriceSTR => " << priceStr << std::endl;
		//checkInput(line);
		
	}
	db.findPriceByDate("2022-03-24");
	return EXIT_FAILURE;
}