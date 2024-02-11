/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <ababdelo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 14:10:02 by ababdelo          #+#    #+#             */
/*   Updated: 2023/12/14 14:10:02 by ababdelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
	private:
		int _fixedPointnumber;
		static const int _fractionalBits = 8;

	public:
		// Constructors, Destructor, and other member functions...
		Fixed();
		Fixed(const Fixed &obj);
		Fixed(const int _FixedPointValue);
		Fixed(const float _FloatedPointValue);
		~Fixed();

		// Copy Asignement operator
		Fixed& operator=(const Fixed &obj);

		// Getter for raw bits
		int getRawBits( void ) const;
		
		// Setter for raw bits
		void setRawBits(int const raw);

		// Convert fixed-point to float
		float	toFloat( void ) const;
		// Convert fixed-point to integer
		int		toInt( void ) const;

		// Comparison operators
		bool	operator>(const Fixed &obj) const;
		bool	operator<(const Fixed &obj) const;
		bool	operator>=(const Fixed &obj) const;
		bool	operator<=(const Fixed &obj) const;
		bool	operator==(const Fixed &obj) const;
		bool	operator!=(const Fixed &obj) const;

		// Arithmetic operators
		Fixed	operator+(const Fixed &obj) const;
		Fixed	operator-(const Fixed &obj) const;
		Fixed	operator*(const Fixed &obj) const;
		Fixed	operator/(const Fixed &obj) const;

		// Increment/Decrement operators
		Fixed&	operator++();       // pre-increment
		Fixed	operator++(int);     // post-increment
		Fixed&	operator--();       // pre-decrement
		Fixed	operator--(int);     // post-decrement

		// Static member functions
		static const	Fixed& min(const Fixed &a, const Fixed &b);
		static			Fixed& min(Fixed &a,Fixed &b);
		static const	Fixed& max(const Fixed &a, const Fixed &b);
		static			Fixed& max(Fixed &a,Fixed &b);
};

// Overload the insertion operator
std::ostream& operator<<(std::ostream &os, const Fixed &obj);

#endif
