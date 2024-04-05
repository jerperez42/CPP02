/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 16:11:42 by jerperez          #+#    #+#             */
/*   Updated: 2024/04/05 11:23:50 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// Point::Point(void)
// {
// 	;
// }

// Point::Point(float x, float y)
// {
// 	this->_x.setRawBits(Fixed(x).getRawBits());
// 	this->_y.setRawBits(Fixed(y).getRawBits());
// }

// Point::Point(Point const &other)
// {
// 	this->_x.setRawBits(other.getX().getRawBits());
// 	this->_y.setRawBits(other.getY().getRawBits());
// }

Point::~Point(void)
{
	;
}

float	Point::x(void) const
{
	return (this->_x.toFloat());
}

float	Point::y(void) const
{
	return (this->_y.toFloat());
}

Fixed	Point::getX(void) const
{
	return (this->_x);
}

Fixed	Point::getY(void) const
{
	return (this->_y);
}

// void	Point::setX(Point const pt)
// {
// 	this->_x = pt.getX();
// }

// void	Point::setY(Point const pt)
// {
// 	this->_y = pt.getY();
// }

// Point	&Point::operator=(const Point &other)
// {
// 	if (this != &other)
// 	{
// 		this->_x = other.getX();
// 		this->_y = other.getY();
// 	}
// 	return (*this);
// }

float	Point::sign(const Point &p1, const Point &p2, const Point &p3)
{
	return ((p1.x() - p3.x()) * (p2.y() - p3.y()) - \
		(p2.x() - p3.x()) * (p1.y() - p3.y()));
}

bool	Point::bsp(Point const a, Point const b, Point const c, Point const point)
{
	float d1, d2, d3;
	bool has_neg, has_pos;

	d1 = sign(point, a, b);
	d2 = sign(point, b, c);
	d3 = sign(point, c, a);

	has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
	has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);

	return !(has_neg && has_pos);
}