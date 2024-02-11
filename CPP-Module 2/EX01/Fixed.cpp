/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <ababdelo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:29:58 by ababdelo          #+#    #+#             */
/*   Updated: 2024/02/09 17:58:28 by ababdelo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Fixed.hpp"

Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
    this->_fixedPointnumber = 0;
}

Fixed::Fixed( const Fixed &obj ) {
    std::cout << "Copy constructor called" << std::endl;
    this->setRawBits(obj.getRawBits());
}

Fixed::Fixed(const int _FixedPointValue)
{
	std::cout << "Int constructor called" << std::endl;
	_fixedPointnumber = _FixedPointValue * (1 << _fractionalBits);
    /* it's the same as (_FixedPointValue*256) */
}

Fixed::Fixed(const float _FloatedPointValue)
{
	std::cout << "Float constructor called" << std::endl;
	/* getting the closest value by using roundf*/
	_fixedPointnumber = roundf(_FloatedPointValue*(1 << _fractionalBits));
    /* 1<<_fractionalBits = 256; so it's the same as (_FloatedPointValue*256)*/
}

Fixed& Fixed::operator=( const Fixed &obj ) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &obj)
        this->_fixedPointnumber = obj.getRawBits();
    return *this;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fixedPointnumber;
}

void    Fixed::setRawBits( int const raw ) {
    this->_fixedPointnumber = raw;
}

/*it's the same as return((float)_fixedPointnumber/(float)256);  1 byte == 8 bits == 256 i7timal*/
float Fixed::toFloat( void ) const{
	return ((float) _fixedPointnumber / (float) (1 << _fractionalBits));
}

int Fixed::toInt( void ) const{
	return ((_fixedPointnumber >> _fractionalBits)); /*it's the same as (_fixedPointnumber/256) */
}

std::ostream& operator << (std::ostream &os, const Fixed &obj)
{
	os << obj.toFloat();// Outputs the floating-point representation of the Fixed object
	return (os);
}