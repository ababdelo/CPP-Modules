/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <ababdelo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 17:50:28 by ababdelo          #+#    #+#             */
/*   Updated: 2024/02/11 01:49:55 by ababdelo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal{
	public:
		Dog();/*Default Constructor*/
		Dog(Dog const &obj);/*Copy Constructor*/
		Dog(std::string const type);/*Type Constructor*/
		Dog&	operator=(Dog const &obj);/*Copy Asignement Operator*/
		~Dog(); /*Destructor*/
		
		void	makeSound() const;
};

#endif
