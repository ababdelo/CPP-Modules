/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <ababdelo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 16:13:38 by ababdelo          #+#    #+#             */
/*   Updated: 2024/02/09 15:56:27 by ababdelo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int                 _fixedPointValue;
    static const int    _fractionalBits = 8;

public:
    Fixed(); /*Default constructor*/
    Fixed( const Fixed &fxd );/*Copy constructor*/
    Fixed& operator=( const Fixed &fxd );/*Copy assignment operator*/
    ~Fixed();/*Destructor*/

    int     getRawBits( void ) const;
    void    setRawBits( int const raw );
};

#endif