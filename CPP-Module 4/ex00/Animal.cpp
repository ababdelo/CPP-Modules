/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <ababdelo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 17:48:24 by ababdelo          #+#    #+#             */
/*   Updated: 2024/02/11 02:01:47 by ababdelo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Animal.hpp"

Animal::Animal()
{
	type = "";
	std::cout << "Default Constructor for Animal is called !" << std::endl;
}

Animal::Animal(const Animal &obj)
{
	type = obj.getType();
	std::cout << "Copy Constructor for Animal is called !" << std::endl;
}

Animal::Animal(std::string type)
{
	this->type = type;
}

Animal::~Animal()
{
	std::cout << "Destructor for Animal is called !" << std::endl;
}

Animal & Animal::operator=(const Animal &obj)
{
	if (this != &obj){
		this->type = obj.getType();
	}
	return *this;
}

std::string Animal::getType() const
{
	return type;
}

void	Animal::makeSound() const{
	std::cout << "Unrecognizable Sound !" << std::endl;
}