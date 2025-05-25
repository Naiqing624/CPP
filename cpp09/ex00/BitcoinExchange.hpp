/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 10:33:10 by nacao             #+#    #+#             */
/*   Updated: 2025/05/25 21:16:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <map>
#include <iostream>
#include <ostream>
#include <fstream>
#include <cstdlib>
#include <sstream>
#include <iomanip>

// 私有成员变量（用来存数据）
// 公共函数（你要对外暴露的功能）
// 1. 加载 CSV 数据库函数
// 2. 查找某天价格的函数
// 3. 可选：检查日期是否合法
class BitcoinExchange
{
	private:
		std::map<std::string, double>	_priceDB;
	public:
		BitcoinExchange(const std::string &file);
		BitcoinExchange();
		~BitcoinExchange();

		int	loadDatabase(const std::string &filename);
		double	findPriceByDate(const std::string &date);
};




#endif