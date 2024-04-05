/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 16:23:36 by jerperez          #+#    #+#             */
/*   Updated: 2024/04/05 11:57:06 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

//*************************
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

// void	main_dec_f(int ac, char **av)
// {
// 	const char	*op = "--*"; //
// 	Fixed 		f1;

// 	std::cout << "prev\t\t" << op << "\t\t" << "curr\t\t" << std::endl;
// 	for (int i = 1; i < ac; i++)
// 	{
// 		f1 = Fixed((float)atof(av[i]));
// 		std::cout << f1 << "\t\t" << --f1 << "\t\t" << f1 << "\t\t" << std::endl;
// 	}
// }

static float	_min(float x, float y, float z)
{
	float min;

	min = x;
	if (y < min)
		min = y;
	if (z < min)
		return (z);
	return (min);
}

static float	_max(float x, float y, float z)
{
	float max;

	max = x;
	if (y > max)
		max = y;
	if (z > max)
		return (z);
	return (max);
}

static void	_demo(Point p1, Point p2, Point p3)
{
	float	pt_per_unit = 8; //use 2^N

	std::cout << "----------------FIGURE-----------------" << std::endl;
	std::cout << "p1(" << p1.x() << ", " << p1.y() << ") " ;
	std::cout << "p2(" << p2.x() << ", " << p2.y() << ") " ;
	std::cout << "p3(" << p3.x() << ", " << p3.y() << ") " << std::endl;
	std::cout << "---------------------------------------" << std::endl;
	float	min_x, min_y, max_x, max_y;
	float	dx = 1 / pt_per_unit;
	float	dy = dx;

	min_x = _min(p1.x(), p2.x(), p3.x());
	min_y = _min(p1.y(), p2.y(), p3.y());
	max_x = _max(p1.x(), p2.x(), p3.x());
	max_y = _max(p1.y(), p2.y(), p3.y());
	for (float y = min_y; y <= max_y; y += dy)
	{
		for (float x = min_x; x <= max_x; x += dx)
		{
			if (Point::bsp(p1, p2, p3, Point(x, y)))
				std::cout << "x";
			else
				std::cout << ".";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

int main(int ac, char **av)
{
	(void)av;
	if (1 == ac)
	{
		_demo(Point(0, 0), Point(1, 0), Point(0, 1));
		_demo(Point(0, 0), Point(3, 0), Point(0, 1));
		_demo(Point(4, 0), Point(3, 0), Point(0, 1));
		_demo(Point(0, 0), Point(0, 0), Point(0, 0));
		_demo(Point(0, 0), Point(1, 1), Point(1, 1));
	}
	return 0;
}