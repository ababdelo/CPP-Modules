/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <ababdelo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:59:03 by ababdelo          #+#    #+#             */
/*   Updated: 2024/02/10 14:02:32 by ababdelo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
protected:
    std::string Name;
    unsigned int HitPoints;
    unsigned int EnergyPoints;
    unsigned int AttackDamage;

public:
    // Constructors and Destructor
    ClapTrap(); /*Default Constructor*/
    ClapTrap(const std::string& name);/*Copy Constructor*/
    ClapTrap& operator=(const ClapTrap& obj); /*Copy Asignement Operator*/
    ~ClapTrap();/*Destructor*/

    // Member functions
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif
