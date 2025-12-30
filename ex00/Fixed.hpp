/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molamham <molamham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 15:55:47 by molamham          #+#    #+#             */
/*   Updated: 2025/12/30 21:57:02 by molamham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
# include <iostream>

class Fixed
{
    private:
        int                 _fixedPointValue;
        static const int    _fractionalBits = 8;
    public:
        Fixed(); // Default constructor
        Fixed(const Fixed &src); // Copy constructor
        Fixed &operator=(const Fixed &src); // Copy assignment constructor
        ~Fixed(); // Destructor
        int getRawBits(void) const;
        void setRawBits(int const raw);
};


#endif