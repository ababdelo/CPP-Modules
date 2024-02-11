/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <ababdelo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 20:20:33 by ababdelo          #+#    #+#             */
/*   Updated: 2024/02/11 02:13:15 by ababdelo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Default Constructor for Cat is called !" << std::endl;
}

Cat::Cat(const Cat &obj) : Animal(obj)  // Explicitly initialize the base class
{
    std::cout << "Copy Constructor for Cat is called !" << std::endl;
}


Cat & Cat::operator=(const Cat &obj)
{
	if (this != &obj){
		this->type = obj.type;
		std::cout << "Copy Assignement opperator for Cat is called !" << std::endl;
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "Destructor called for Cat is called !" << std::endl;
}

void	Cat::makeSound() const{
	std::cout << "Meow Meow !" << std::endl;
}