/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 20:16:48 by marvin            #+#    #+#             */
/*   Updated: 2025/07/01 20:16:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <ctime>
#include <iomanip>

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cerr << "Please inter more than one argument" << std::endl;
		return (EXIT_FAILURE);
	}

	PmergeMe	pMergeMe;

	//Check & print input
	for (int i = 1; i < argc; i++)
	{
		if (!pMergeMe.isValidInt(argv[i]))
		{
			std::cerr << "Error" << std::endl;
			std::exit(EXIT_FAILURE);
		}
	}
	std::cout << "Before: ";
	for (int i = 1; i < argc; i++)
	{
			pMergeMe.stringToInt(argv[i]);
	}
	std::cout << std::endl;

	//STL Vector
	std::clock_t	startVec = std::clock();
	pMergeMe.fordJohnsonVector();
	std::clock_t	endVec = std::clock();
	double timeVec = static_cast<double>(endVec - startVec) / CLOCKS_PER_SEC * 1000;

	//STL deque
	std::clock_t	startDeq = std::clock();
	pMergeMe.fordJohnsonDeque();
	std::clock_t	endDeq = std::clock();
	double timeDeq = static_cast<double>(endDeq - startDeq) / CLOCKS_PER_SEC * 1000;


	//Print
	std::cout << "After: ";
	pMergeMe.showVectorArray();
	std::cout << std::endl;
	std::cout << "Time to process a range of " << argc - 1 << " elements with std::[Vector]: " << timeVec << " us" <<std::endl;
	std::cout << "Time to process a range of " << argc - 1 << " elements with std::[Deque]: " << timeDeq << " us" <<std::endl;


	return 0;
}