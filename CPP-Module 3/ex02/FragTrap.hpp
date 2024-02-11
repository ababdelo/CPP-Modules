/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <ababdelo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 11:08:23 by ababdelo          #+#    #+#             */
/*   Updated: 2024/02/10 14:14:07 by ababdelo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
    // Constructors and Destructor
    FragTrap(); /*Default Constructor*/
    FragTrap(const std::string& name);/*Copy Constructor*/
    FragTrap& operator=(const FragTrap& obj); /*Copy Asignement Operator*/
    ~FragTrap();/*Deconstructor*/

    void highFivesGuys();
};

#endif