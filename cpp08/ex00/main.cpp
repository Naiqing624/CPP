/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacao <nacao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 11:07:30 by nacao             #+#    #+#             */
/*   Updated: 2025/05/20 11:19:51 by nacao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>

int main()
{
    std::vector<int>    v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    try
    {
        easyfind(v, 10);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        easyfind(v, 20);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        easyfind(v, 15);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        easyfind(v, 30);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}