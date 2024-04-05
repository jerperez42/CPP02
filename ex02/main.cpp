/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 16:23:36 by jerperez          #+#    #+#             */
/*   Updated: 2024/02/13 13:39:30 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"
#include "Fixed.hpp"

std::ostream&	operator<<(std::ostream& os, const Fixed &data)
{
	os << data.toFloat();
	return (os);
}

//*************************
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

void	main_mult(int ac, char **av)
{
	const char	*op = "*"; //
	Fixed 		f1;
	Fixed 		f2;

	std::cout << op << "\t\t";
	for (int i = 1; i < ac; i++)
		std::cout << Fixed((float)atof(av[i])) << "\t\t";
	std::cout << std::endl;
	for (int i = 1; i < ac; i++)
	{
		f1 = Fixed((float)atof(av[i]));
		std::cout << f1 << "\t\t";
		for (int j = 1; j < ac; j++)
		{
			f2 = Fixed((float)atof(av[j]));
			std::cout << (f1 * f2) << "\t\t"; //
		}
		std::cout << std::endl;
	}
}


void	main_div(int ac, char **av)
{
	const char	*op = "/"; //
	Fixed 		f1;
	Fixed 		f2;

	std::cout << op << "\t\t";
	for (int i = 1; i < ac; i++)
		std::cout << Fixed((float)atof(av[i])) << "\t\t";
	std::cout << std::endl;
	for (int i = 1; i < ac; i++)
	{
		f1 = Fixed((float)atof(av[i]));
		std::cout << f1 << "\t\t";
		for (int j = 1; j < ac; j++)
		{
			f2 = Fixed((float)atof(av[j]));
			std::cout << (f1 / f2) << "\t\t"; //
		}
		std::cout << std::endl;
	}
}

void	main_minus(int ac, char **av)
{
	const char	*op = "-"; //
	Fixed 		f1;
	Fixed 		f2;

	std::cout << op << "\t\t";
	for (int i = 1; i < ac; i++)
		std::cout << Fixed((float)atof(av[i])) << "\t\t";
	std::cout << std::endl;
	for (int i = 1; i < ac; i++)
	{
		f1 = Fixed((float)atof(av[i]));
		std::cout << f1 << "\t\t";
		for (int j = 1; j < ac; j++)
		{
			f2 = Fixed((float)atof(av[j]));
			std::cout << (f1 - f2) << "\t\t"; //
		}
		std::cout << std::endl;
	}
}

void	main_plus(int ac, char **av)
{
	const char	*op = "+"; //
	Fixed 		f1;
	Fixed 		f2;

	std::cout << op << "\t\t";
	for (int i = 1; i < ac; i++)
		std::cout << Fixed((float)atof(av[i])) << "\t\t";
	std::cout << std::endl;
	for (int i = 1; i < ac; i++)
	{
		f1 = Fixed((float)atof(av[i]));
		std::cout << f1 << "\t\t";
		for (int j = 1; j < ac; j++)
		{
			f2 = Fixed((float)atof(av[j]));
			std::cout << (f1 + f2) << "\t\t"; //
		}
		std::cout << std::endl;
	}
}

void	main_sup(int ac, char **av)
{
	const char	*op = ">"; //
	Fixed 		f1;
	Fixed 		f2;

	std::cout << op << "\t\t";
	for (int i = 1; i < ac; i++)
		std::cout << Fixed((float)atof(av[i])) << "\t\t";
	std::cout << std::endl;
	for (int i = 1; i < ac; i++)
	{
		f1 = Fixed((float)atof(av[i]));
		std::cout << f1 << "\t\t";
		for (int j = 1; j < ac; j++)
		{
			f2 = Fixed((float)atof(av[j]));
			std::cout << (f1 > f2) << "\t\t"; //
		}
		std::cout << std::endl;
	}
}

void	main_inf(int ac, char **av)
{
	const char	*op = "<"; //
	Fixed 		f1;
	Fixed 		f2;

	std::cout << op << "\t\t";
	for (int i = 1; i < ac; i++)
		std::cout << Fixed((float)atof(av[i])) << "\t\t";
	std::cout << std::endl;
	for (int i = 1; i < ac; i++)
	{
		f1 = Fixed((float)atof(av[i]));
		std::cout << f1 << "\t\t";
		for (int j = 1; j < ac; j++)
		{
			f2 = Fixed((float)atof(av[j]));
			std::cout << (f1 < f2) << "\t\t"; //
		}
		std::cout << std::endl;
	}
}

void	main_supeq(int ac, char **av)
{
	const char	*op = ">="; //
	Fixed 		f1;
	Fixed 		f2;

	std::cout << op << "\t\t";
	for (int i = 1; i < ac; i++)
		std::cout << Fixed((float)atof(av[i])) << "\t\t";
	std::cout << std::endl;
	for (int i = 1; i < ac; i++)
	{
		f1 = Fixed((float)atof(av[i]));
		std::cout << f1 << "\t\t";
		for (int j = 1; j < ac; j++)
		{
			f2 = Fixed((float)atof(av[j]));
			std::cout << (f1 >= f2) << "\t\t"; //
		}
		std::cout << std::endl;
	}
}

void	main_infeq(int ac, char **av)
{
	const char	*op = "<="; //
	Fixed 		f1;
	Fixed 		f2;

	std::cout << op << "\t\t";
	for (int i = 1; i < ac; i++)
		std::cout << Fixed((float)atof(av[i])) << "\t\t";
	std::cout << std::endl;
	for (int i = 1; i < ac; i++)
	{
		f1 = Fixed((float)atof(av[i]));
		std::cout << f1 << "\t\t";
		for (int j = 1; j < ac; j++)
		{
			f2 = Fixed((float)atof(av[j]));
			std::cout << (f1 <= f2) << "\t\t"; //
		}
		std::cout << std::endl;
	}
}

void	main_eq(int ac, char **av)
{
	const char	*op = "=="; //
	Fixed 		f1;
	Fixed 		f2;

	std::cout << op << "\t\t";
	for (int i = 1; i < ac; i++)
		std::cout << Fixed((float)atof(av[i])) << "\t\t";
	std::cout << std::endl;
	for (int i = 1; i < ac; i++)
	{
		f1 = Fixed((float)atof(av[i]));
		std::cout << f1 << "\t\t";
		for (int j = 1; j < ac; j++)
		{
			f2 = Fixed((float)atof(av[j]));
			std::cout << (f1 == f2) << "\t\t"; //
		}
		std::cout << std::endl;
	}
}

void	main_neq(int ac, char **av)
{
	const char	*op = "!="; //
	Fixed 		f1;
	Fixed 		f2;

	std::cout << op << "\t\t";
	for (int i = 1; i < ac; i++)
		std::cout << Fixed((float)atof(av[i])) << "\t\t";
	std::cout << std::endl;
	for (int i = 1; i < ac; i++)
	{
		f1 = Fixed((float)atof(av[i]));
		std::cout << f1 << "\t\t";
		for (int j = 1; j < ac; j++)
		{
			f2 = Fixed((float)atof(av[j]));
			std::cout << (f1 != f2) << "\t\t"; //
		}
		std::cout << std::endl;
	}
}

void	main_max(int ac, char **av)
{
	const char	*op = "max"; //
	Fixed 		f1;
	Fixed 		f2;

	std::cout << op << "\t\t";
	for (int i = 1; i < ac; i++)
		std::cout << Fixed((float)atof(av[i])) << "\t\t";
	std::cout << std::endl;
	for (int i = 1; i < ac; i++)
	{
		f1 = Fixed((float)atof(av[i]));
		std::cout << f1 << "\t\t";
		for (int j = 1; j < ac; j++)
		{
			f2 = Fixed((float)atof(av[j]));
			std::cout << (Fixed::max(f1, f2)) << "\t\t"; //
		}
		std::cout << std::endl;
	}
}

void	main_min(int ac, char **av)
{
	const char	*op = "min"; //
	Fixed 		f1;
	Fixed 		f2;

	std::cout << op << "\t\t";
	for (int i = 1; i < ac; i++)
		std::cout << Fixed((float)atof(av[i])) << "\t\t";
	std::cout << std::endl;
	for (int i = 1; i < ac; i++)
	{
		f1 = Fixed((float)atof(av[i]));
		std::cout << f1 << "\t\t";
		for (int j = 1; j < ac; j++)
		{
			f2 = Fixed((float)atof(av[j]));
			std::cout << (Fixed::min(f1, f2)) << "\t\t"; //
		}
		std::cout << std::endl;
	}
}


void	main_f_inc(int ac, char **av)
{
	const char	*op = "*++"; //
	Fixed 		f1;

	std::cout << "prev\t\t" << op << "\t\t" << "curr\t\t" << std::endl;
	for (int i = 1; i < ac; i++)
	{
		f1 = Fixed((float)atof(av[i]));
		std::cout << f1 << "\t\t" << f1++ << "\t\t" << f1 << "\t\t" << std::endl;
	}
}

void	main_inc_f(int ac, char **av)
{
	const char	*op = "++*"; //
	Fixed 		f1;

	std::cout << "prev\t\t" << op << "\t\t" << "curr\t\t" << std::endl;
	for (int i = 1; i < ac; i++)
	{
		f1 = Fixed((float)atof(av[i]));
		std::cout << f1 << "\t\t" << ++f1 << "\t\t" << f1 << "\t\t" << std::endl;
	}
}

void	main_f_dec(int ac, char **av)
{
	const char	*op = "*--"; //
	Fixed 		f1;

	std::cout << "prev\t\t" << op << "\t\t" << "curr\t\t" << std::endl;
	for (int i = 1; i < ac; i++)
	{
		f1 = Fixed((float)atof(av[i]));
		std::cout << f1 << "\t\t" << f1-- << "\t\t" << f1 << "\t\t" << std::endl;
	}
}

void	main_dec_f(int ac, char **av)
{
	const char	*op = "--*"; //
	Fixed 		f1;

	std::cout << "prev\t\t" << op << "\t\t" << "curr\t\t" << std::endl;
	for (int i = 1; i < ac; i++)
	{
		f1 = Fixed((float)atof(av[i]));
		std::cout << f1 << "\t\t" << --f1 << "\t\t" << f1 << "\t\t" << std::endl;
	}
}

void	main_42(void)
{
	Fixed	a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;
}

int main(int ac, char **av)
{

	if (1 == ac)
	{
		main_42();
	}
	else
	{
		main_plus(ac, av);
		std::cout << std::endl;
		main_minus(ac, av);
		std::cout << std::endl;
		main_mult(ac, av);
		std::cout << std::endl;
		main_div(ac, av);
		std::cout << std::endl;
		main_sup(ac, av);
		std::cout << std::endl;
		main_inf(ac, av);
		std::cout << std::endl;
		main_supeq(ac, av);
		std::cout << std::endl;
		main_infeq(ac, av);
		std::cout << std::endl;
		main_eq(ac, av);
		std::cout << std::endl;
		main_neq(ac, av);
		std::cout << std::endl;
		main_min(ac, av);
		std::cout << std::endl;
		main_max(ac, av);
		std::cout << std::endl;
		main_f_inc(ac, av);
		std::cout << std::endl;
		main_inc_f(ac, av);
		std::cout << std::endl;
		main_f_dec(ac, av);
		std::cout << std::endl;
		main_dec_f(ac, av);
		std::cout << std::endl;
	}

	return 0;
}