/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <ababdelo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 11:53:31 by ababdelo          #+#    #+#             */
/*   Updated: 2024/02/10 13:58:28 by ababdelo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ScavTrap.hpp"

//Default Constructor
ScavTrap::ScavTrap(){
    this->Name = "ED-S";
    this->HitPoints = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 20;
    std::cout << "ScavTrap " << Name << " is ready to guard the gate!" << std::endl;
}

// Copy Constructor
ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
    HitPoints = 100;
    EnergyPoints = 50;
    AttackDamage = 20;
    std::cout << "ScavTrap " << Name << " is ready to guard the gate!" << std::endl;
}

// Copy Assignment Operator
ScavTrap& ScavTrap::operator=(const ScavTrap& obj) {
    if (this != &obj) {
        this->Name = obj.Name;
        this->HitPoints = obj.HitPoints;
        this->EnergyPoints = obj.EnergyPoints;
        this->AttackDamage = obj.AttackDamage;
        std::cout << "ScavTrap " << Name << " is alive! Ready for action!" << std::endl;
    }
    return *this;
}

// Destructor
ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << Name << " bids farewell. Gate successfully guarded!" << std::endl;
}

// Member function for ScavTrap
void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << Name << " is now in Gatekeeper mode!" << std::endl;
}

// Override the attack function
void ScavTrap::attack(const std::string& target) {
    if (EnergyPoints >= 1) {
        std::cout << "ScavTrap " << Name << " attacks " << target
                  << ", causing " << AttackDamage << " points of special damage!" << std::endl;
        EnergyPoints--;
    } else {
        std::cout << "ScavTrap " << Name << " is out of energy and can't attack!" << std::endl;
    }
}
