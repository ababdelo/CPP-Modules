/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <ababdelo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 17:00:39 by ababdelo          #+#    #+#             */
/*   Updated: 2023/11/30 17:00:39 by ababdelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type) {
    this->setType(type);
}

Weapon::~Weapon() {
}

const  std::string& Weapon::getType( void ) {
    return this->type;
}

void                Weapon::setType( std::string newType ) {
    this->type = newType;
}
