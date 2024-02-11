/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <ababdelo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 21:43:12 by ababdelo          #+#    #+#             */
/*   Updated: 2024/02/11 06:06:49 by ababdelo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "";
	std::cout << "Default Constructor for WrongAnimal is called !" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
	type = obj.getType();
	std::cout << "Copy Constructor for WrongAnimal is called !" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
	this->type = type;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &obj)
{
	if (this != &obj)
		type = obj.getType();
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor for WrongAnimal is called !" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return type;
}

void	WrongAnimal::makeSound() const{
	std::cout << "What Sound \?" << std::endl;
}

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "Default Constructor for WrongCat is called !" << std::endl;
}

WrongCat::WrongCat(const WrongCat &obj) : WrongAnimal(obj)  // Explicitly initialize the base class
{
    std::cout << "Copy Constructor for Cat is called !" << std::endl;
}


WrongCat::~WrongCat()
{
	std::cout << "Destructor for WrongCat is called !" << std::endl;
}

WrongCat & WrongCat::operator=(const WrongCat &obj)
{
	if (this != &obj){
		this->type = obj.type; 
		std::cout << "Copy Assignement opperator for WrongCat is called !" << std::endl;
	}
	return *this;
}

void	WrongCat::makeSound() const{
	std::cout << "Wrong meow meow \?\?!" << std::endl;
}