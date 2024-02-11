/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <ababdelo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 03:39:33 by ababdelo          #+#    #+#             */
/*   Updated: 2024/02/11 04:22:27 by ababdelo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Default Constructor for Cat is called !" << std::endl;
	brain = new Brain();
}

Cat::Cat(const Cat &obj) : Animal(obj)  // Explicitly initialize the base class
{
	brain = NULL;
	std::cout << "Copy Constructor for Cat is called !" << std::endl;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Destructor called for Cat is called !" << std::endl;
}

Cat & Cat::operator=(const Cat &obj)
{
	type = obj.type;
	if (!brain)
		brain = new Brain;
	brain->operator=(*obj.brain);
	std::cout << "Assignement opperator for Cat is called !" << std::endl;
	return *this;
}

void	Cat::makeSound() const{
	std::cout << "Meow Meow !" << std::endl;
}
