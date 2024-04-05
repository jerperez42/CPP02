/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 16:06:30 by jerperez          #+#    #+#             */
/*   Updated: 2024/02/12 10:31:36 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include "Fixed.h"
# include <iostream>

class	Fixed
{
	public:
		Fixed(void);
		Fixed(const int);
		Fixed(const float);
		Fixed(const Fixed &);
		~Fixed(void);
		Fixed	&operator=(const Fixed &);
		int		getRawBits(void) const;
		void	setRawBits(int const);
		float	toFloat(void) const;
		int		toInt(void) const;
	private:
		int					_raw;
		static const int	_frc = FRC_NBIT;
};

#endif