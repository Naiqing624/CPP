/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 11:37:10 by marvin            #+#    #+#             */
/*   Updated: 2025/04/04 11:37:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	_type = "WRONG Cat";
	std::cout << "WRONG cat construtor" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WRONG cat destrutor" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "Wrong miaou~" << std::endl;
}