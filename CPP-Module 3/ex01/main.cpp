/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <ababdelo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 11:58:31 by ababdelo          #+#    #+#             */
/*   Updated: 2024/02/10 13:59:02 by ababdelo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ScavTrap.hpp"

int main() {
    std::cout << "\n/******************* 0 ******************/\n" << std::endl;
    ScavTrap scavtrap("ED'S");
    scavtrap.attack("Enemy A");
    scavtrap.takeDamage(120);
    std::cout << "\n/******************* 0 ******************/\n" << std::endl;
    std::cout << std::endl;
    scavtrap.attack("Enemy B");
    scavtrap.beRepaired(30);
    scavtrap.takeDamage(50);
    std::cout << std::endl;
    std::cout << "\n/******************* 1 ******************/\n" << std::endl;
    ScavTrap scavtrap1;
    scavtrap1.attack("Enemy C");
    scavtrap1.beRepaired(10);
    scavtrap1.takeDamage(5);
    std::cout << std::endl;
    std::cout << "\n/******************* 2 ******************/\n" << std::endl;
    ScavTrap scavtrap2 = scavtrap;
	scavtrap2.guardGate();
    std::cout << std::endl;
    std::cout << "\n/******************* * ******************/\n" << std::endl;
    return 0;
}
