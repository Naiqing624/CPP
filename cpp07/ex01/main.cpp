/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacao <nacao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 09:55:39 by nacao             #+#    #+#             */
/*   Updated: 2025/05/15 13:55:07 by nacao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

template <class T>
void    print(const T &x)
{
    std::cout << x << std::endl;
}

void doubleInt(const int& value)
{
    std::cout << (value * 2) << std::endl;
}

int main(void)
{
    int array[] = {1, 2, 3, 4, 5};
    std::cout << "print int array" << std::endl;
    ::iter(array, 5, print);
    std::cout << "int array with doubleInt" << std::endl;
    ::iter(array, 5, doubleInt);
    std::string strArr[] = {"hello", "42", "mdrr"};
    std::cout << "print string array" << std::endl;
    ::iter(strArr, 3, print);
    return (0);
}

// #include "Awesome.hpp"
// #include "print.hpp"
// int main() {
//     int tab[] = { 0, 1, 2, 3, 4 };
//     Awesome tab2[5];

//     iter(tab, 5, print);   // 打印 int[]
//     iter(tab2, 5, print);  // 打印 Awesome[]

//     return 0;
// }