/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <ababdelo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 03:34:06 by ababdelo          #+#    #+#             */
/*   Updated: 2024/02/11 03:34:47 by ababdelo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include "Brain.hpp"

class Animal
{
	protected:
		std::string type;
	public:
		Animal(); /*Default Constructor*/
		Animal(const Animal &obj);/*Copy Constructor*/
		Animal(std::string const _type);/*Type Constructor*/
		Animal&	operator=(const Animal &obj);/*Copy Assignement Operator*/
		virtual ~Animal(); /*Destructor*/
		/* The destructor is declared as virtual to ensure that it is only called
		when deleting objects through a base class pointer. This enables proper
		cleanup of resources and supports polymorphic behavior. */
		
		std::string 		getType() const;
		virtual void makeSound() const;
		/* Declared as virtual to allow derived classes to provide their own
		implementations. Ensures that the correct version of makeSound is
		called based on the actual type of the object, promoting polymorphism. */
	private:
};

#endif