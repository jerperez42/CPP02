/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 16:11:42 by jerperez          #+#    #+#             */
/*   Updated: 2024/02/12 15:33:27 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"
#include "Fixed.hpp"
//
#include <cmath>

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_raw = 0;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	//*this = other;
	this->_raw = other.getRawBits();
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
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

///

float Fixed::toFloat(void) const
{
	//value = raw_int * 2 ^-(_frac)
	return ((float)this->_raw / (float)(1 << this->_frc));
}

int Fixed::toInt(void) const
{
	return (this->_raw >> this->_frc);
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