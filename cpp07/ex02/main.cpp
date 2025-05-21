/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacao <nacao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 11:16:42 by nacao             #+#    #+#             */
/*   Updated: 2025/05/15 13:51:33 by nacao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "Array.tpp"
#include <iostream>


int main(void)
{
    try
    {
        Array<int> a(3);
        a[0] = 10;
        a[1] = 20;
        a[2] = 30;
        
        std::cout << "a[1] = " << a[0] << std::endl;
        std::cout << "a[2] = " << a[1] << std::endl;
        std::cout << "a[3] = " << a[2] << std::endl;
        
        std::cout << "---------------------" <<std::endl;
        
        Array<int> b = a;

        std::cout << "b[1] = " << a[0] << std::endl;
        std::cout << "b[2] = " << b[1] << std::endl;
        std::cout << "b[3] = " << b[2] << std::endl;

        std::cout << "---------------------" <<std::endl;
        
        Array<int> c;
        
        c = a;

        std::cout << "c[1] = " << c[0] << std::endl;
        std::cout << "c[2] = " << c[1] << std::endl;
        std::cout << "c[3] = " << c[2] << std::endl;

        std::cout << "---------------------" <<std::endl;

        std::cout << "EXCEPTION..." << std::endl;
        std::cout << a[10] << std::endl;

    } 
    catch (const std::exception& e)
    {
        std::cerr  << e.what() << std::endl;
    }
    
}

// #include <cstdlib>
// #include <ctime>
// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }