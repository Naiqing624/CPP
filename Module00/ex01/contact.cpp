/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naiqing <naiqing@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 11:49:36 by nacao             #+#    #+#             */
/*   Updated: 2025/03/11 19:37:41 by naiqing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void	Contact::setContact()
{
	std::cout << "Please entre your name " << std::endl;
	std::cin >> name;
	std::cout << "Please entre your phone numero " << std::endl;
	std::cin >> numero;
}

void	Contact::display()
{
	std::cout << "Name: " << name << std::endl << "Phone Numbre: " << numero << std::endl;
}