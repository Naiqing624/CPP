/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacao <nacao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 09:50:17 by nacao             #+#    #+#             */
/*   Updated: 2025/05/20 11:19:05 by nacao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <stdexcept>
#include <ostream>
#include <iostream>

template <typename T>
typename T::iterator	easyfind(T &container, int num)
{
	typename T::iterator	it = std::find(container.begin(), container.end(), num);
	if (it == container.end())
		throw std::runtime_error("Can not find");
	std::cout << "Find number : " << *it << std::endl;
	return it;
}

#endif