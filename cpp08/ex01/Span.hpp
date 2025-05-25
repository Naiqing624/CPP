/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacao <nacao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 11:21:46 by nacao             #+#    #+#             */
/*   Updated: 2025/05/22 09:36:42 by nacao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>
#include <ostream>
#include <algorithm>
#include <limits>

class Span
{
    private:
        unsigned int	_max;
		std::vector<int>	_numbers;
        
    public:
        Span(unsigned int num);
        ~Span();
		Span(const Span &other);
		Span &operator = (const Span &other);
        void    addNumber(int n);
        int	shortestSpan();
        int	longestSpan();
		std::vector<int>	getNumbers() const;

		template <typename It>
		void	addNumber(It begin, It end)
		{
			while (begin != end)
			{
				this->addNumber(*begin);
				begin++;
			}
		}
};

std::ostream &operator << (std::ostream &out, const Span &span);


#endif