/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <ababdelo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 08:06:48 by ababdelo          #+#    #+#             */
/*   Updated: 2024/02/11 08:06:50 by ababdelo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal{
	private:
		Brain *brain;
	public:
		Cat();/*Default Constructor*/
		Cat(Cat const &obj);/*Copy Constructor*/
		Cat(std::string const type);/*Type Constructor*/
		Cat&	operator=(Cat const &obj);/*Copy Asignement Operator*/
		~Cat(); /*Destructor*/
		
		void	makeSound() const;
};

#endif