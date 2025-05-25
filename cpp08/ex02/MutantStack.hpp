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
	    MutantStack() : std::stack<T>() {}
		MutantStack(const MutantStack& other) : std::stack<T>(other) {}
		MutantStack& operator=(const MutantStack& other)
		{
			std::stack<T>::operator=(other);
			return *this;
		}
		~MutantStack() {}

		// | `std::stack<T>`        | 你继承的 stack 类型              |
		// | `container_type`       | 它底下真正的容器类型（就是 `deque<T>`）  |
		// | `::iterator`           | 那个容器的迭代器类型                 |
		// | `typedef ... iterator` | 取个新名字叫 `iterator`，放在你自己的类里 |
		//typename -> 因为你访问的是一个“模板类(stack)”里面的类型，C++ 编译器分不清是类型还是变量，你必须加 typename。

		typedef typename std::stack<T>::container_type::iterator	iterator;
		typedef	typename std::stack<T>::container_type::const_iterator	const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator	reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator	const_reverse_iterator;

		iterator	begin()
		{
			return this->c.begin();
		}

		iterator	end()
		{
			return this->c.end();
		}

		reverse_iterator	rbegin()
		{
			return	this->c.rbegin();
		}

		reverse_iterator	rend()
		{
			return	this->c.rend();
		}

		const_iterator begin() const 
		{
			return this->c.begin();
		}
		
		const_iterator end() const
		{
			return this->c.end();
		}

		const_reverse_iterator rbegin() const
		{
			return this->c.rbegin();
		}
		
		const_reverse_iterator rend() const
		{
			return this->c.rend();
		}
};


#endif