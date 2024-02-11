/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <ababdelo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 08:07:49 by ababdelo          #+#    #+#             */
/*   Updated: 2024/02/11 08:08:39 by ababdelo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Default Constructor for Dog is called !" << std::endl;
	brain = new Brain();
}

Dog::Dog(const Dog &obj) : Animal(obj)  // Explicitly initialize the base class
{
	brain = NULL;
	std::cout << "Copy Constructor for Dog is called !" << std::endl;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Destructor called for Dog is called !" << std::endl;
}

Dog & Dog::operator=(const Dog &obj)
{
	type = obj.type;
	if (!brain)
		brain = new Brain;
	brain->operator=(*obj.brain);
	std::cout << "Copy Assignement opperator for Dog is called !" << std::endl;
	return *this;
}

void	Dog::makeSound() const{
	std::cout << "Woof Woof !" << std::endl;
}
