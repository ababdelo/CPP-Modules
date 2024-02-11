/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <ababdelo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 20:20:49 by ababdelo          #+#    #+#             */
/*   Updated: 2024/02/11 02:19:55 by ababdelo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"

int main(){
	const Animal* a = new Animal();
	const Animal* c = new Cat();
	const Animal* d = new Dog();
	const WrongAnimal* wc = new WrongCat();

	std::cout << c->getType() << " " << std::endl;
	std::cout << d->getType() << " " << std::endl;
	std::cout << wc->getType() << " " << std::endl;
	c->makeSound();
	d->makeSound();
	wc->makeSound();
    a->makeSound();
	
	delete a;
	delete c;
	delete d;
	delete wc;
    
	return 0;
}