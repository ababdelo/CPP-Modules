/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <ababdelo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 03:49:36 by ababdelo          #+#    #+#             */
/*   Updated: 2024/02/11 03:51:08 by ababdelo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
	protected:
		std::string type;

	public:
		WrongAnimal();/*Default Constructor*/
		WrongAnimal(const WrongAnimal &obj);/*Copy Constructor*/
		WrongAnimal(std::string type);/*Type Constructor*/
		WrongAnimal & operator=(const WrongAnimal &obj);/*Copy Assignement Operator*/
		~WrongAnimal(); /*Destructor*/
		
		std::string getType() const;
		void		makeSound() const;
};

class WrongCat: public WrongAnimal
{
	public:
		WrongCat();/*Default Constructor*/
		WrongCat(const WrongCat &obj);/*Copy Constructor*/
		WrongCat & operator=(const WrongCat &obj);/*Copy Assignement Operator*/
		~WrongCat(); /*Destructor*/
		
		void	makeSound() const;		
};

#endif