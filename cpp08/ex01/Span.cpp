/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 10:06:43 by marvin            #+#    #+#             */
/*   Updated: 2025/05/21 10:06:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int num) : _max(num)
{
    
}

Span::~Span()
{
}

void	Span::addNumber(int n)
{
	if (_numbers.size() >= this->_max)
		throw std::runtime_error("Span is full!");
	else
		this->_numbers.push_back(n);
}

int	Span::shortestSpan()
{
	if (this->_numbers.size() < 2)
		throw std::runtime_error("Just one number");
	std::vector<int>	v = this->_numbers;
	std::sort(v.begin(), v.end());
	int	min = std::numeric_limits<int>::max();
	for (size_t i = 1; i < v.size(); ++i)
	{
		int	shortest = v[i] - v[i - 1];
		if (shortest < min)
			min = shortest;
	}
	return min;
}

int	Span::longestSpan()
{
	if (this->_numbers.size() < 2)
		throw std::runtime_error("Just one number");
	std::vector<int>	v = this->_numbers;
	std::sort(v.begin(), v.end());
	return v.back() - v.front();
}

std::vector<int> Span::getNumbers() const
{
	return this->_numbers;
}

std::ostream &operator << (std::ostream &out, const Span &span)
{
	const	std::vector<int> &v = span.getNumbers(); 
	for (size_t i = 0; i < v.size(); i++)
	{
		out << v[i];
		if (i != v.size() - 1)
			out << ", ";
	}
	return out;
}