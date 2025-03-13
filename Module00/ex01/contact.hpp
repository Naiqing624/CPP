/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naiqing <naiqing@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 12:55:26 by nacao             #+#    #+#             */
/*   Updated: 2025/03/11 19:33:33 by naiqing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact
{
private:
	std::string name;
	std::string numero;
	
public:
	void setContact();
	void display();
};


#endif