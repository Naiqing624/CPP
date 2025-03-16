/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naiqing <naiqing@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 12:55:26 by nacao             #+#    #+#             */
/*   Updated: 2025/03/16 19:45:42 by naiqing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <cstdlib>

class Contact
{
private:
	static std::string fieldName[5];
	std::string info[11];

	enum	Field {
		FristName = 0,
		LastName,
		NickName,
		PhoneNumber,
		DarkestSecret
	};
	
public:
	Contact();
	~Contact();
	bool	setContact();
	void	display() const;
};


#endif