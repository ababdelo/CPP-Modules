/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <ababdelo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 14:15:23 by ababdelo          #+#    #+#             */
/*   Updated: 2023/12/14 14:15:23 by ababdelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Default constructor
Fixed::Fixed() {
    this->_fixedPointnumber = 0;
}

// Copy constructor
Fixed::Fixed( const Fixed &obj ) {
    this->setRawBits(obj.getRawBits());
}

// Integer constructor
Fixed::Fixed(const int _FixedPointValue)
{
	_fixedPointnumber = _FixedPointValue * (1 << _fractionalBits); /* it's the same as (_FixedPointValue*256) */
}

// Float constructor
Fixed::Fixed(const float _FloatedPointValue)
{
	/* getting the closest value by using roundf*/
	_fixedPointnumber = roundf(_FloatedPointValue*(1<<_fractionalBits));/* 1<<_fractionalBits = 256; so it's the same as (_FloatedPointValue*256)*/
}

// Destructor
Fixed::~Fixed() {}

// Copy assignment operator
Fixed& Fixed::operator=( const Fixed &obj ) {
    if (this != &obj)
        this->_fixedPointnumber = obj.getRawBits();
    return *this;
}

// Getter for raw bits
int Fixed::getRawBits( void ) const {
    return this->_fixedPointnumber;
}

// Setter for raw bits
void    Fixed::setRawBits( int const raw ) {
    this->_fixedPointnumber = raw;
}

// Convert fixed-point to float
float Fixed::toFloat( void ) const{
	return ((float) _fixedPointnumber / (float) (1 << _fractionalBits));/*it's the same as return((float)_fixedPointnumber/(float)256);  1 byte == 8 bits == 256 i7timal*/
}

// Convert fixed-point to integer
int Fixed::toInt( void ) const{
	return ((_fixedPointnumber >> _fractionalBits)); /*it's the same as (_fixedPointnumber/256) */
}

// Comparison operators
bool Fixed::operator>(const Fixed &obj) const {
    return _fixedPointnumber > obj.getRawBits();
}

bool Fixed::operator<(const Fixed &obj) const {
    return _fixedPointnumber < obj.getRawBits();
}

bool Fixed::operator>=(const Fixed &obj) const {
    return _fixedPointnumber >= obj.getRawBits();
}

bool Fixed::operator<=(const Fixed &obj) const {
    return _fixedPointnumber <= obj.getRawBits();
}

bool Fixed::operator==(const Fixed &obj) const {
    return _fixedPointnumber == obj.getRawBits();
}

bool Fixed::operator!=(const Fixed &obj) const {
    return _fixedPointnumber != obj.getRawBits();
}

// Arithmetic operators
Fixed Fixed::operator+(const Fixed &obj) const {
    Fixed result;
    result.setRawBits(_fixedPointnumber + obj.getRawBits());
    return result;
}

Fixed Fixed::operator-(const Fixed &obj) const {
    Fixed result;
    result.setRawBits(_fixedPointnumber - obj.getRawBits());
    return result;
}

Fixed Fixed::operator*(const Fixed &obj) const {
    Fixed result;
    result.setRawBits((_fixedPointnumber * obj.getRawBits()) >> _fractionalBits);
    return result;
}

Fixed Fixed::operator/(const Fixed &obj) const {
    Fixed result;
    result.setRawBits((_fixedPointnumber << _fractionalBits) / obj.getRawBits());
    return result;
}

// Pre-increment operator
Fixed& Fixed::operator++() {
    ++_fixedPointnumber;
    return *this;
}

// Post-increment operator
Fixed Fixed::operator++(int) {
    Fixed tmp(*this);
    ++(*this);
    return tmp;
}

// Pre-decrement operator
Fixed& Fixed::operator--() {
    --_fixedPointnumber;
    return *this;
}

// Post-decrement operator
Fixed Fixed::operator--(int) {
    Fixed tmp(*this);
    --(*this);
    return tmp;
}

// Static member function to find minimum of two Fixed objects
Fixed& Fixed::min(Fixed &a, Fixed &b) {
    return (a < b) ? a : b;
}

// Static member function to find minimum of two constant Fixed objects
const Fixed& Fixed::min(const Fixed &a, const Fixed &b) {
    return (a < b) ? a : b;
}

// Static member function to find maximum of two Fixed objects
Fixed& Fixed::max(Fixed &a, Fixed &b) {
    return (a > b) ? a : b;
}

// Static member function to find maximum of two constant Fixed objects
const Fixed& Fixed::max(const Fixed &a, const Fixed &b) {
    return (a > b) ? a : b;
}

// Overloaded insertion operator implementation
std::ostream& operator<<(std::ostream &os, const Fixed &obj) {
    os << obj.toFloat();
    return os;
}
