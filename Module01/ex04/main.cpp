/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naiqing <naiqing@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 11:49:35 by naiqing           #+#    #+#             */
/*   Updated: 2025/03/21 11:49:37 by naiqing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Please entre in the following order: ./program_name 'filename.txt' 'search' 'replace'" << std::endl;
	}
	else
	{
		const std::string	filename = argv[1];
		const std::string	search = argv[2];
		const std::string	replace = argv[3];
		std::string			buffer;
		std::ifstream		infile;
		std::ofstream		outfile;
		
		infile.open(argv[1]);
		if (!infile)
		{
			std::perror("Cannot open file");
			return EXIT_FAILURE;
		}
		outfile.open((filename + ".replace").c_str(), std::ios::out | std::ios::trunc);
		if (!outfile)
		{
			std::perror("Cannot creat output file");
			infile.close();
			return EXIT_FAILURE;
		}
		while(std::getline(infile, buffer))
		{
			size_t	pos_find= 0;
			size_t	prev = 0;
			std::string	result;
			while ((pos_find = buffer.find(search, prev)) != std::string::npos)
			{
				result.append(buffer.substr(prev, pos_find - prev));
				result.append(replace);
				prev = pos_find + search.length();
			}
			result.append(buffer.substr(prev));
			outfile << result;
			if (infile.peek() != EOF)
				outfile << std::endl;
		}
		std::cout << "Success, pleace open filename.txt.replace to check the result." << std::endl;
		infile.close();
		outfile.close();
		return EXIT_SUCCESS;
	}
}