/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <ababdelo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:30:01 by ababdelo          #+#    #+#             */
/*   Updated: 2024/02/09 15:58:55 by ababdelo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int                 _fixedPointnumber;
        static const int    _fractionalBits = 8;

    public:
        /*Constructors*/
        Fixed();
        Fixed( const Fixed &obj );/*Copy Constructor*/
        Fixed(const int _FixedPointValue);
        Fixed(const float _FloatedPointValue);

        /*Destructor*/
        ~Fixed();

        /*Copy Assignement Operator*/
        Fixed& operator=( const Fixed &obj );


        /*Getter & Setter*/
        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
        /*Member's Functions (Methodes)*/
        int     toInt( void ) const;
        float	toFloat( void ) const;
};

std::ostream& operator << (std::ostream &os, const Fixed &obj);

#endif