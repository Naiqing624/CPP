/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 10:33:10 by nacao             #+#    #+#             */
/*   Updated: 2025/07/01 15:51:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <sstream>
#include <vector>
#include <cstdlib>


// main -> 拿到表达式字符串
//     ↓
// 拆成 token（空格分割）
//     ↓
// 对每个 token：
//     是数字 → 入栈
//     是符号 → 弹出两个数 → 运算 → 结果入栈
//     否则 → 报错
//     ↓
// 表达式处理完后：
//     栈中只有一个数？✅ → 输出它
//                     ❌ → 报错


class RPN
{
	private:
		std::stack<int>	_stack;
		
	public:
		RPN();
		~RPN();

		bool	isDigital(const std::string str);
		bool	isOperator(const std::string str);
		void	token(const std::string &str);
		int	handleError();

		
};



#endif