/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <ababdelo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 08:07:35 by ababdelo          #+#    #+#             */
/*   Updated: 2024/02/11 08:07:44 by ababdelo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal{
	private:
		Brain		*brain;
	public:
		Dog();/*Default Constructor*/
		Dog(Dog const &obj);/*Copy Constructor*/
		Dog(std::string const type);/*Type Constructor*/
		Dog&	operator=(Dog const &obj);/*Copy Asignement Operator*/
		~Dog(); /*Destructor*/
		
		void	makeSound() const;
};

#endif
