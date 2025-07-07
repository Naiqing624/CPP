/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 20:29:12 by marvin            #+#    #+#             */
/*   Updated: 2025/07/01 20:29:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(/* args */)
{
}

PmergeMe::~PmergeMe()
{
}

bool	PmergeMe::isValidInt(const std::string	&str)
{
	if (str.empty())
		return false;
	for (size_t i = 0; i < str.length(); i++)
	{
		if (!std::isdigit(str[i]))
			return false;
	}
	return true;
}

int	PmergeMe::stringToInt(const std::string	&str)
{
	int	num = std::atoi(str.c_str());
	std::cout << " " << num;
	this->_vec.push_back(num);
	this->_deq.push_back(num);
	return 0;
}

template <typename T>
void	PmergeMe::insertionSort(T &str)
{
	size_t	size = str.size();
	for (size_t i = 1; i < size; i++)
	{
		int	key = str[i];
		int	j = i - 1;
		while (j >= 0 &&str[j] > key)
		{
			str[j + 1] = str[j];
			j--;
		}
		str[j + 1] = key;
	}
}

// 1. 初始化 left = 0, right = i - 1（i 是当前要插入的位置）
// 2. 重复以下步骤，直到 left > right：
//    - mid = (left + right) / 2
//    - 如果 key < arr[mid]，说明 key 应该在左边 → right = mid - 1
//    - 如果 key > arr[mid]，说明 key 应该在右边 → left = mid + 1
// 3. 循环结束时，left 就是 key 的插入位置
template <typename T>
void	PmergeMe::binarySort(T &main, T &pending)
{
	for (size_t i = 0; i < pending.size(); i++)
	{
		int	key = pending[i];
		int	left = 0;
		int	right = main.size() - 1;
		while (left <= right)
		{
			int	mid = (left + right) / 2;
			if (key < main[mid])
				right = mid - 1;
			else
				left = mid + 1;
		}
		main.insert(main.begin() + left, key);
	}
}

int	PmergeMe::fordJohnsonVector()
{
	int	last = -1;
	size_t	size = this->_vec.size();
	if (this->_vec.size() % 2 != 0)
	{
		last = this->_vec.back();
		size--;
	}
	for (size_t i = 0; i < size; i += 2)
	{
		int	a = this->_vec[i];
		int	b = this->_vec[i + 1];
		this->mainChainVec.push_back(std::max(a, b));
		this->pendingVec.push_back(std::min(a, b));
	}
	if (last != -1)
		this->mainChainVec.push_back(last);

	insertionSort(this->mainChainVec);
	binarySort(this->mainChainVec, this->pendingVec);
	
	return 0;
}

int	PmergeMe::fordJohnsonDeque()
{
	int	last = -1;
	size_t	size = this->_deq.size();
	if (this->_deq.size() % 2 != 0)
	{
		last = this->_deq.back();
		size--;
	}
	for (size_t i = 0; i < size; i += 2)
	{
		int	a = this->_deq[i];
		int	b = this->_deq[i + 1];
		this->mainChainDeq.push_back(std::max(a, b));
		this->pendingDeq.push_back(std::min(a, b));
	}
	if (last != -1)
		this->mainChainDeq.push_back(last);

	insertionSort(this->mainChainDeq);
	binarySort(this->mainChainDeq, this->pendingDeq);
	
	return 0;
}


void	PmergeMe::showVectorArray()
{
	size_t	size = mainChainVec.size();
	for (size_t i = 0; i < size; i++)
		std::cout << mainChainVec[i] << " ";
}