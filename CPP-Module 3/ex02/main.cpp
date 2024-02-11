/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <ababdelo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 10:49:57 by ababdelo          #+#    #+#             */
/*   Updated: 2024/02/10 14:13:11 by ababdelo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "FragTrap.hpp"

int main() {
    std::cout << "\n/******************* 0 ******************/\n" << std::endl;
    FragTrap fragtrap("FR4G-TP");
    fragtrap.attack("Enemy X");
    fragtrap.takeDamage(40);
    std::cout << std::endl;
    std::cout << "\n/******************* 0 ******************/\n" << std::endl;
    fragtrap.attack("Enemy Y");
    fragtrap.beRepaired(20);
    fragtrap.takeDamage(30);
    std::cout << std::endl;
    std::cout << "\n/******************* 1 ******************/\n" << std::endl;
    FragTrap fragtrap1;
    fragtrap1.attack("Enemy Z");
    fragtrap1.highFivesGuys();
    fragtrap1.takeDamage(10);
    std::cout << std::endl;
    std::cout << "\n/******************* 2 ******************/\n" << std::endl;
    FragTrap fragtrap2 = fragtrap;
    fragtrap2.highFivesGuys();
    fragtrap2.takeDamage(100);
    std::cout << "\n/******************* * ******************/\n" << std::endl;
    return 0;
}