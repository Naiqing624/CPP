/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 13:38:29 by marvin            #+#    #+#             */
/*   Updated: 2025/05/21 13:38:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
private:

public:
	// | `std::stack<T>`        | 你继承的 stack 类型              |
	// | `container_type`       | 它底下真正的容器类型（就是 `deque<T>`）  |
	// | `::iterator`           | 那个容器的迭代器类型                 |
	// | `typedef ... iterator` | 取个新名字叫 `iterator`，放在你自己的类里 |
	//typename -> 因为你访问的是一个“模板类(stack)”里面的类型，C++ 编译器分不清是类型还是变量，你必须加 typename。

	typedef typename std::stack<T>::container_type::iterator	iterator;

	iterator	begin()
	{
		return this->c.begin();
	}

	iterator	end()
	{
		return this->c.end();
	}
};


#endif