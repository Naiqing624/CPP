/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 20:17:23 by marvin            #+#    #+#             */
/*   Updated: 2025/07/01 20:17:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <sstream>
#include <vector>
#include <deque>
#include <cstdlib>

class PmergeMe
{
	private:
		std::vector<int>	_vec;
		std::deque<int>	_deq;
		std::vector<int>	mainChainVec;
		std::vector<int>	pendingVec;
		std::deque<int>	mainChainDeq;
		std::deque<int>	pendingDeq;

	public:
		PmergeMe(/* args */);
		~PmergeMe();
		bool	isValidInt(const std::string &str);
		int	stringToInt(const std::string &str);
		int	fordJohnsonVector();
		int	fordJohnsonDeque();
		template <typename T>
		void	insertionSort(T &container);
		template <typename T>
		void	binarySort(T &main, T &pending);
		void	showVectorArray();
};

#endif