/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 12:20:18 by marvin            #+#    #+#             */
/*   Updated: 2025/05/21 12:20:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <stack>

int main() {
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "[Top] " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "[Size after pop] " << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(73);
    mstack.push(37);
    mstack.push(77);
    mstack.push(73711);
    mstack.push(0);

    std::cout << "\n[Iterator Test]" << std::endl;
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    for (; it != ite; ++it)
        std::cout << *it << " ";
    std::cout << std::endl;

    std::cout << "\n[Const Iterator Test]" << std::endl;
    const MutantStack<int> constStack = mstack;
    for (MutantStack<int>::const_iterator cit = constStack.begin(); cit != constStack.end(); ++cit)
        std::cout << *cit << " ";
    std::cout << std::endl;

    std::cout << "\n[Reverse Iterator Test]" << std::endl;
    for (MutantStack<int>::reverse_iterator rit = mstack.rbegin(); rit != mstack.rend(); ++rit)
        std::cout << *rit << " ";
    std::cout << std::endl;

    std::cout << "\n[Const Reverse Iterator Test]" << std::endl;
    for (MutantStack<int>::const_reverse_iterator crit = constStack.rbegin(); crit != constStack.rend(); ++crit)
        std::cout << *crit << " ";
    std::cout << std::endl;

    std::cout << "\n[std::stack Compatibility Test]" << std::endl;
    std::stack<int> s(mstack);
    while (!s.empty()) {
        std::cout << s.top() << " ";
        s.pop();
    }
    std::cout << std::endl;

    return 0;
}

