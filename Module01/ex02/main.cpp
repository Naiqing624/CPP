/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacao <nacao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 15:09:20 by naiqing           #+#    #+#             */
/*   Updated: 2025/03/27 14:07:15 by nacao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string	str =  "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;
	
	std::cout << "The memory address of the string variable is " << &str << std::endl;
	std::cout << "The memory address held by stringPTR is " << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF is " << &stringREF << std::endl;

	std::cout << "The value of the string variable is " << str << std::endl;
	std::cout << "The value pointed to by stringPTR is " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF is" << stringREF << std::endl;
}