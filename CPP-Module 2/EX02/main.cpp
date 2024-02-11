/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <ababdelo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 14:16:04 by ababdelo          #+#    #+#             */
/*   Updated: 2024/02/09 20:08:26 by ababdelo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Fixed.hpp"

int main() {
    
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(4));
    Fixed const c(42.42f);
    Fixed d = Fixed(13.37f);
    Fixed f;
    f = d;

    // Display initial values
    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;
    std::cout << "f is " << f << std::endl;

    std::cout << "\n" << std::endl;

    // Pre-increment
    std::cout << "++a is " << ++a << std::endl;
    std::cout << "a is " << a << std::endl;

    std::cout << "\n" << std::endl;

    // Post-increment
    std::cout << "a++ is " << a++ << std::endl;
    std::cout << "a is " << a << std::endl;

    std::cout << "\n" << std::endl;

    // Pre-decrement
    std::cout << "--d is " << --d << std::endl;
    std::cout << "d is " << d << std::endl;

    std::cout << "\n" << std::endl;

    // Post-decrement
    std::cout << "d-- is " << d-- << std::endl;
    std::cout << "d is " << d << std::endl;

    std::cout << "\n" << std::endl;

    // Post-increment
    std::cout << "d++ is " << d++ << std::endl;
    std::cout << "d is " << d << std::endl;

    std::cout << "\n" << std::endl;

    // Pre-increment
    std::cout << "++d is " << ++d << std::endl;
    std::cout << "d is " << d << std::endl;

    std::cout << "\n" << std::endl;

    // Arithmetic operations
    std::cout << "b / 2 is " << b / 2 << std::endl;
    std::cout << "b * 2 is " << b * 2 << std::endl;
    std::cout << "b - 2 is " << b - 2 << std::endl;
    std::cout << "b + 2 is " << b + 2 << std::endl;

    std::cout << "\n" << std::endl;

    // Display initial values
    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;
    std::cout << "f is " << f << std::endl;

    std::cout << "\n" << std::endl;

    // Comparison operations
    std::cout << "Fixed::max(a, b) is " << Fixed::max(a, b) << std::endl;
    std::cout << "Fixed::min(a, b) is " << Fixed::min(a, b) << std::endl;
    std::cout << "Fixed::max(b, c) is " << Fixed::max(b, c) << std::endl;
    std::cout << "Fixed::min(b, c) is " << Fixed::min(b, c) << std::endl;

    std::cout << "\n" << std::endl;

    // Comparison operations
    std::cout << "a > b is " << (a > b) << std::endl;
    std::cout << "a < b is " << (a < b) << std::endl;
    std::cout << "a >= b is " << (a >= b) << std::endl;
    std::cout << "a <= b is " << (a <= b) << std::endl;
    std::cout << "d == f is " << (d == f) << std::endl;
    std::cout << "d != f is " << (d != f) << std::endl;

    return 0;
}