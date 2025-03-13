/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacao <nacao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 19:43:04 by nacao             #+#    #+#             */
/*   Updated: 2025/03/13 14:45:18 by nacao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "contact.hpp"

class phoneBook
{
private:
    Contact contacts[8];
    int contactCount;
    
public:
    phoneBook();
    ~phoneBook();
    void    addContact();
    void    displayContact();
};

phoneBook::phoneBook(/* args */)
{
}

phoneBook::~phoneBook()
{
}


#endif