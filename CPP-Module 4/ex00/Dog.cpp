/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <ababdelo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 17:50:13 by ababdelo          #+#    #+#             */
/*   Updated: 2024/02/11 02:15:00 by ababdelo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Default Constructor for Dog is called !" << std::endl;
}

Dog::Dog(const Dog &obj) : Animal(obj)  // Explicitly initialize the base class
{
    std::cout << "Copy Constructor for Dog is called !" << std::endl;
}


Dog & Dog::operator=(const Dog &obj)
{
	if (this != &obj){
		this->type = obj.type;
		std::cout << "Copy Assignement opperator for Dod is called !" << std::endl;
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << "Destructor for Dog is called !" << std::endl;
}

void	Dog::makeSound() const{
	std::cout << "Woof Woof !" << std::endl;
}