/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <ababdelo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 11:08:33 by ababdelo          #+#    #+#             */
/*   Updated: 2024/02/10 14:07:53 by ababdelo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "FragTrap.hpp"

//Default Constructor
FragTrap::FragTrap(){
    this->Name = "ED-F";
    this->HitPoints = 100;
    this->EnergyPoints = 100;
    this->AttackDamage = 30;
    std::cout << "FragTrap " << Name << " is ready for some fragging action!" << std::endl;
}

// Copy Constructor
FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
    HitPoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
    std::cout << "FragTrap " << Name << " is ready for some fragging action!" << std::endl;
}

// Copy Assignment Operator
FragTrap& FragTrap::operator=(const FragTrap& obj) {
    if (this != &obj) {
        this->Name = obj.Name;
        this->HitPoints = obj.HitPoints;
        this->EnergyPoints = obj.EnergyPoints;
        this->AttackDamage = obj.AttackDamage;
        std::cout << "FragTrap " << Name << " is alive! Ready for action!" << std::endl;
    }
    return *this;
}

// Destructor
FragTrap::~FragTrap() {
    std::cout << "FragTrap " << Name << " says goodbye with a big explosion! Boom!" << std::endl;
}

// Member function for FragTrap
void FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << Name << " requests a high five from all the guys!" << std::endl;
}