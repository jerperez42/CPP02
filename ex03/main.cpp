/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 16:23:36 by jerperez          #+#    #+#             */
/*   Updated: 2024/02/13 15:33:05 by jerperez         ###   ########.fr       */
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

float	ft_min(float x, float y, float z)
{
	float min;

	min = x;
	if (y < min)
		min = y;
	if (z < min)
		return (z);
	return (min);
}

float	ft_max(float x, float y, float z)
{
	float max;

	max = x;
	if (y > max)
		max = y;
	if (z > max)
		return (z);
	return (max);
}

void	main_dflt(void)
{
	int		min_x, min_y, max_x, max_y;

	Point	p1 = Point(0, 0);
	Point	p2 = Point(1, 0);
	Point	p3 = Point(0, 1);

	min_x = ft_min(p1.x(), p2.x(), p3.x());
	min_y = ft_min(p1.y(), p2.y(), p3.y());
	max_x = ft_max(p1.x(), p2.x(), p3.x());
	max_y = ft_max(p1.y(), p2.y(), p3.y());
	for (int y = min_y; y <= max_y; y++)
	{
		for (int x = min_x; x <= max_x; x++)
		{
			if (Point::bsp(p1, p2, p3, Point(x, y)))
				std::cout << "x";
			else
				std::cout << " ";
		}
		std::cout << std::endl;
	}
}

int main(int ac, char **av)
{
	(void)av;
	if (1 == ac)
		main_dflt();
	// else
	// 	main_fancy(ac, av);
	return 0;
}