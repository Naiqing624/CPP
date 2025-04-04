/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 10:24:52 by marvin            #+#    #+#             */
/*   Updated: 2025/04/04 10:24:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain	*_brain;

	public:
		Dog();
		~Dog();
		Dog(const Dog &other);
		Dog	&operator = (const Dog &other);
		void	makeSound() const;

		const std::string	&getIdea(int i) const;
		void				setIdea(int i, std::string text);
};



#endif