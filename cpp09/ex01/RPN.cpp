/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 10:33:10 by nacao             #+#    #+#             */
/*   Updated: 2025/07/01 16:08:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
}

RPN::~RPN()
{
}

int	RPN::handleError()
{
	std::cerr << "Error" << std::endl;
	exit(EXIT_FAILURE);
}

bool	RPN::isDigital(const std::string token)
{
	if (token.length() == 1 && std::isdigit(token[0]))
	{
		this->_stack.push(token[0] - '0');
		//std::cout << this->_stack.top() << std::endl;
		return true;
	}
	return false;
}

bool	RPN::isOperator(const std::string token)
{
	if (token.length() != 1)
		return false;
	char	op = token[0];
	if (op != '+' && op != '-' && op != '*' && op != '/')
		return false;
	if (this->_stack.size() < 2)
		this->handleError();
	int	second = this->_stack.top();
	this->_stack.pop();
	int	first = this->_stack.top();
	this->_stack.pop();
	int	result;
	switch (op)
	{
		case '+':
			result = first + second;
			break;
		
		case '-':
			result = first - second;
			break;
		
		case '*':
			result = first * second;
			break;
		
		case '/':
			if (second == 0)
				this->handleError();
			result = first / second;
			break;
		
		default:
			break;
	}
	this->_stack.push(result);
	return true;
}

void	RPN::token(const std::string &str)
{
	std::string	token;
	std::istringstream	iss(str);
	while (iss >> token)
	{
		//std::cout << token << std::endl;
		if (this->isDigital(token) == false)
		{
			//std::cout << "test 1" << std::endl;
			if (!this->isOperator(token))
			{
				//std::cout << "test 2" << std::endl;
				this->handleError();
			}
		}
	}
	if (this->_stack.size() != 1)
		this->handleError();
	else
		std::cout << this->_stack.top() << std::endl;
}