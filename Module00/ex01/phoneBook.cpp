/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacao <nacao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 19:42:52 by naiqing           #+#    #+#             */
/*   Updated: 2025/03/13 14:39:58 by nacao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

phoneBook::phoneBook()
{
    contactCount = 0;
}

void    phoneBook::addContact()
{
    if (contactCount < 8)
    {
        contacts[contactCount].setContact();
        contactCount++;
    }
    else
    {
        std::cout << "Full" << std::endl;
    }
}

void    phoneBook::displayContact()
{
    if (contactCount == 0)
    {
        std::cout << "PhoneBoon id Ampty" << std::endl;
    }
    for (int i; i < contactCount; i++)
    {
        std::cout << "Contact " << i + 1 << ": ";
        contacts[i].display();
    }
}