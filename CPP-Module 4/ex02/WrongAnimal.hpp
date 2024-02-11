/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <ababdelo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 08:09:17 by ababdelo          #+#    #+#             */
/*   Updated: 2024/02/11 08:26:24 by ababdelo         ###   ########.fr       */
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
		virtual void		makeSound()const  = 0;
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