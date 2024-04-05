/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 16:11:42 by jerperez          #+#    #+#             */
/*   Updated: 2024/02/13 14:51:49 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"
#include "Fixed.hpp"
//
#include <cmath>

Fixed::Fixed(void)
{
	//std::cout << "Default constructor called" << std::endl;
	this->_raw = 0;
}

Fixed::Fixed(const Fixed &other)
{
	//std::cout << "Copy constructor called" << std::endl;
	//*this = other;
	this->_raw = other.getRawBits();
}

Fixed::~Fixed(void)
{
	//std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &other)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_raw = other.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	return (this->_raw);
}

void	Fixed::setRawBits(int const raw)
{
	this->_raw = raw;
}

float Fixed::toFloat(void) const
{
	//value = raw_int * 2 ^-(_frac)
	return ((float)this->getRawBits() / (float)(1 << this->_frc));
}

int Fixed::toInt(void) const
{
	return ((int)(this->getRawBits() >> this->_frc));
}

Fixed::Fixed(const int i)
{
	this->_raw = i << FRC_NBIT;
}


Fixed::Fixed(const float f)
{
	//raw_int = (int)(value * 2^(_frac))
	this->_raw = round(f * (1 << this->_frc));
}

//

bool	Fixed::operator<(const Fixed &other)
{
	return (this->_raw < other.getRawBits());
}

bool	Fixed::operator>(const Fixed &other)
{
	return (this->_raw > other.getRawBits());
}

bool	Fixed::operator>=(const Fixed &other)
{
	return (this->_raw >= other.getRawBits());
}

bool	Fixed::operator<=(const Fixed &other)
{
	return (this->_raw <= other.getRawBits());
}

bool	Fixed::operator==(const Fixed &other)
{
	return (this->_raw == other.getRawBits());
}

bool	Fixed::operator!=(const Fixed &other)
{
	return (this->_raw != other.getRawBits());
}

Fixed	Fixed::operator+(const Fixed &other)
{
	Fixed	res;

	res.setRawBits(this->_raw + other.getRawBits());
	return (res);
}

Fixed	Fixed::operator-(const Fixed &other)
{
	Fixed	res;

	res.setRawBits(this->_raw - other.getRawBits());
	return (res);
}

Fixed	Fixed::operator*(const Fixed &other)
{
	Fixed	res;

	res.setRawBits(this->_raw * other.getRawBits() >> this->_frc);
	return (res);
}

Fixed	Fixed::operator/(const Fixed &other)
{
	if (0 == other.getRawBits())
	{
		std::cerr << "error";
		return (Fixed());
	}
	return (Fixed((float)this->_raw / (float)other.getRawBits()));
}

Fixed	Fixed::operator++(int)
{
	Fixed	old = *this;

	operator++();
	return (old);
}

Fixed	Fixed::operator--(int)
{
	Fixed	old = *this;

	operator--();
	return (old);
}

Fixed	&Fixed::operator++(void)
{
	this->_raw++;
	return (*this);
}

Fixed	&Fixed::operator--(void)
{
	this->_raw--;
	return (*this);
}

Fixed	&Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f1 > f2)
		return (f1);
	return (f2);
}

Fixed	&Fixed::min(Fixed &f1, Fixed &f2)
{
	if (f1 < f2)
		return (f1);
	return (f2);
}

const Fixed	&Fixed::min(const Fixed &f1, const Fixed &f2)
{
	if (f1.getRawBits() < f2.getRawBits())
		return (f1);
	return (f2);
}

const Fixed	&Fixed::max(const Fixed &f1, const Fixed &f2)
{
	if (f1.getRawBits() > f2.getRawBits())
		return (f1);
	return (f2);
}