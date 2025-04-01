/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 18:44:43 by marvin            #+#    #+#             */
/*   Updated: 2025/03/30 18:44:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
    // 创建 ScavTrap 对象
    ScavTrap defender("Alice");

    // 展示攻击（调用的是 ScavTrap 重写后的 attack）
    defender.attack("the intruder");

    // 调用新功能 guardGate
    defender.guardGate();

    // 消耗能量连续攻击，直到没能量
    for (int i = 0; i < 51; ++i) {
        defender.attack("Enemy");
    }

    // 修复自己（如果能量还够）
    defender.beRepaired(20);

    // 受伤测试
    defender.takeDamage(90);
    defender.takeDamage(15);  // 确认血量不能为负

    // 再次攻击（生命或能量为 0 时的行为）
    defender.attack("Another Enemy");

	return (0);
}