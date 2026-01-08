/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouad <mouad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 09:52:19 by molamham          #+#    #+#             */
/*   Updated: 2026/01/04 15:24:16 by mouad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed{
    private:
        int _fixedPointValue;
        static const int _fractionalBits = 8;
    public:

        Fixed(); // Default constructor
        Fixed(const Fixed &src); // Copy constructor
        Fixed &operator=(const Fixed &src); // Copy assignment operator
        ~Fixed();

        Fixed(const int n); // int constructor
        Fixed(const float n); // float constructor

        float toFloat() const; // convert to float
        int toInt() const; // convert to int

        int getRawBits() const;
        void setRawBits(int const raw);
};


#endif