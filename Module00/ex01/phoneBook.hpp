/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naiqing <naiqing@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 19:43:04 by nacao             #+#    #+#             */
/*   Updated: 2025/03/16 19:45:46 by naiqing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "contact.hpp"

class PhoneBook
{
private:
    Contact contacts[8];
    int		index;
	bool	full;
    
public:
    PhoneBook();
    ~PhoneBook();
    void    addContactInfo();
    void    getPhonebookInfo() const;
};


#endif