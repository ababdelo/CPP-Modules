/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <ababdelo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:59:06 by ababdelo          #+#    #+#             */
/*   Updated: 2024/02/10 13:42:02 by ababdelo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ClapTrap.hpp"

int main() {
    std::cout << "\n/******************* 0 ******************/\n" << std::endl;
    ClapTrap claptrap("ED'S");
    claptrap.attack("Enemy1");
    claptrap.takeDamage(5);
    std::cout << "\n/******************* 0 ******************/\n" << std::endl;
    claptrap.beRepaired(7);
    claptrap.attack("Enemy2");
    claptrap.takeDamage(25);
    std::cout << "\n/******************* 1 ******************/\n" << std::endl;
    ClapTrap claptrap1;
    claptrap1.attack("Enemy3");
    claptrap1.beRepaired(2);
    claptrap1.takeDamage(5);
    std::cout << "\n/******************** 2 *****************/\n" << std::endl;
    ClapTrap claptrap2 = claptrap;
    claptrap1.attack("Enemy3");
    claptrap1.beRepaired(2);
    claptrap1.takeDamage(5);
    std::cout << "\n/******************** * *****************/\n" << std::endl;
    return 0;
}
