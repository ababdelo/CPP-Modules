/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <ababdelo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 11:53:23 by ababdelo          #+#    #+#             */
/*   Updated: 2024/02/10 13:58:34 by ababdelo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
    // Constructors and Destructor
    ScavTrap(); /*Default Constructor*/
    ScavTrap(const std::string& name);/*Copy Constructor*/
    ScavTrap& operator=(const ScavTrap& obj);/*Copy Assignement Operator*/
    ~ScavTrap();/*Destructor*/


    // Member function specific to ScavTrap
    void guardGate();

    // Override the attack function
    void attack(const std::string& target);
};

#endif
