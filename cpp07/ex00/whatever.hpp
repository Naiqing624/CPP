/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacao <nacao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 09:06:15 by nacao             #+#    #+#             */
/*   Updated: 2025/05/15 09:53:23 by nacao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

// template 是关键词，表示“我要写一个模板”
// <typename T> 是模板参数列表，意思是：
// “这里面我用到一个类型变量，名字叫 T，它不是固定类型（int、float 等），你使用的时候告诉我 T 是什么类型就可以。
template	<typename T>
void	swap(T &a, T &b)
{
	T	tmp;
	tmp = a;
	a = b;
	b = tmp;
}

template	<typename T>
T	min(T &a, T &b)
{
	if (a < b)
		return a;
	else
		return b;
}

template	<typename T>
T	max(T &a, T&b)
{
	if (a < b)
		return b;
	else
		return a;
}

#endif