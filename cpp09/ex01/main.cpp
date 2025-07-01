/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 11:36:12 by nacao             #+#    #+#             */
/*   Updated: 2025/05/26 11:36:15 by nacao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

// 输入不是合法表达式	Error
// 栈中没够两个数字来运算	Error
// 除以 0	Error
// 输入不是数字或符号	Error
// 运算结束后栈不只剩一个结果	Error

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cerr << "Error: Please entre at least one argument" << std::endl;
		return 1;
	}
	RPN	rpn;
	rpn.token(argv[1]);
	return 0;
}