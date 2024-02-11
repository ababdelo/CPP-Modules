/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <ababdelo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 16:00:14 by ababdelo          #+#    #+#             */
/*   Updated: 2024/02/10 14:07:27 by ababdelo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ClapTrap.hpp"

//Default Constructor
ClapTrap::ClapTrap(){
    this->Name = "ED-C";
    this->HitPoints = 10;
    this->EnergyPoints = 10;
    this->AttackDamage = 0;
    std::cout << "ClapTrap " << Name << " is alive! Ready for action!" << std::endl;
}

// copy Constructor
ClapTrap::ClapTrap(const std::string& name)
    : Name(name), HitPoints(10), EnergyPoints(10), AttackDamage(0) {
    std::cout << "ClapTrap " << Name << " is alive! Ready for action!" << std::endl;
}

// Copy Assignment Operator
ClapTrap& ClapTrap::operator=(const ClapTrap& obj) {
    if (this != &obj) {
        this->Name = obj.Name;
        this->HitPoints = obj.HitPoints;
        this->EnergyPoints = obj.EnergyPoints;
        this->AttackDamage = obj.AttackDamage;
        std::cout << "ClapTrap " << Name << " is alive! Ready for action!" << std::endl;
    }
    return *this;
}

// Destructor
ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << Name << " says goodbye! It was a good ride." << std::endl;
}

// Attack function
void ClapTrap::attack(const std::string& target) {
    if (EnergyPoints >= 1) {
        std::cout << "ClapTrap " << Name << " attacks " << target
                  << ", causing " << AttackDamage << " points of damage!" << std::endl;
        EnergyPoints--;
    } else {
        std::cout << "ClapTrap " << Name << " is out of energy and can't attack!" << std::endl;
    }
}

// Take damage function
void ClapTrap::takeDamage(unsigned int amount) {
    if (HitPoints > 0) {
        if (amount >= HitPoints) {
            std::cout << "ClapTrap " << Name << " takes " << amount << " points of damage and is destroyed!" << std::endl;
            HitPoints = 0;
        } else {
            std::cout << "ClapTrap " << Name << " takes " << amount << " points of damage!" << std::endl;
            HitPoints -= amount;
        }
    } else {
        std::cout << "ClapTrap " << Name << " is already out of hit points!" << std::endl;
    }
}


// Be repaired function
void ClapTrap::beRepaired(unsigned int amount) {
    if (HitPoints > 0) {
        std::cout << "ClapTrap " << Name << " is being repaired, gaining " << amount << " hit points!" << std::endl;
        HitPoints += amount;
        EnergyPoints--;
    } else {
        std::cout << "ClapTrap " << Name << " is beyond repair!" << std::endl;
    }
}