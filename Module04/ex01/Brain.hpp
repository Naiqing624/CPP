/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naiqing <naiqing@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 19:14:55 by naiqing           #+#    #+#             */
/*   Updated: 2025/04/04 20:56:09 by naiqing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"
#include <string>

class Brain
{
	private:
		std::string	_ideas[100];
		
	public:
		Brain();
		~Brain();
		Brain(const Brain &other);
		Brain &operator = (const Brain &other);

		const std::string	&getIdea(int i) const;
		void				setIdea(int i, std::string text);
};


#endif