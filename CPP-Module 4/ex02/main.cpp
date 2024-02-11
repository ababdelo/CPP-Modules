/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <ababdelo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 08:11:43 by ababdelo          #+#    #+#             */
/*   Updated: 2024/02/11 08:56:53 by ababdelo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"

int main() {
    // Creating and testing animals
    {
        std::cout << "/* Creating and Testing Animals */" << std::endl;
        // const Animal* a = new Animal("Generic Animal");
        const Animal* c = new Cat();
        const Animal* d = new Dog();
        // const WrongAnimal* wc = new WrongCat();

        // std::cout << "Animal type: " << a->getType() << std::endl;
        std::cout << "Cat type: " << c->getType() << std::endl;
        std::cout << "Dog type: " << d->getType() << std::endl;

        // a->makeSound();
        c->makeSound();
        d->makeSound();

        // delete a;
        delete c;
        delete d;

        std::cout << "\n/*********************************/\n" << std::endl;
    }

    // Creating and testing array of animals
    {
        std::cout << "/* Creating and Testing Array of Animals */" << std::endl;
        Animal* animals[10];
        for (int i = 0; i < 5; i++) {
            animals[i] = new Dog();
            animals[i + 5] = new Cat();
        }

        for (int i = 0; i < 10; i++) {
            std::cout << "Animal type: " << animals[i]->getType() << std::endl;
            animals[i]->makeSound();
        }

        for (int i = 9; i >= 0; i--)
            delete animals[i];

        std::cout << "\n/*********************************/\n" << std::endl;
    }

    // Testing deep copy and destruction chaining
    {
        std::cout << "/* Testing Deep Copy and Destruction Chaining */" << std::endl;
        Cat cat1;
        Cat cat2;
        Brain c;
        Dog a;
        Dog b(a);
        WrongCat cat3;

        b.makeSound();
        cat3.makeSound();
        cat1 = cat2;

        std::cout << "\n/*********************************/\n" << std::endl;
    }

    // Testing potential memory leaks using "leaks" command
    system("leaks Animal");

    return 0;
}
