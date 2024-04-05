/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 16:06:30 by jerperez          #+#    #+#             */
/*   Updated: 2024/04/05 11:25:16 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class	Point
{
	public:
		Point(void) : _x(Fixed(0)), _y(Fixed(0)) {}
		Point(float x, float y)  : _x(Fixed(x)), _y(Fixed(y)) {}
		Point(Point const &other) : _x(other.getX()), _y(other.getX()) {}
		float x(void) const;
		float y(void) const;
		void setX(const Fixed);
		void setY(const Fixed);
		Fixed getX(void) const;
		Fixed getY(void) const;
		~Point(void);

		Point	&operator=(const Point &);
		static bool	bsp(Point const, Point const, Point const, Point const);
	private:
		static float	sign(const Point &, const Point &, const Point &);
		Fixed const	_x;
		Fixed const	_y;
};

#endif