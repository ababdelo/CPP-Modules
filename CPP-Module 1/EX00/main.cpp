/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <ababdelo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:55:18 by ababdelo          #+#    #+#             */
/*   Updated: 2023/11/30 15:55:18 by ababdelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void ) {
    std::string name;

    std::cout << " [#] Creating Zombie on the Stack." << std::endl;
    std::cout << "    [+] Zombie name: ";
    std::cin >> name;

    Zombie zombie1(name);
    
    std::cout << " [#] Creating Zombie on the Heap." << std::endl;
    std::cout << "    [+] Zombie name: ";
    std::cin >> name;

    Zombie *zombie2 = newZombie(name);
    zombie2->announce();
    delete zombie2;

    std::cout << "Calling randomChump()." << std::endl;
    randomChump("randi");
    return 0;
}