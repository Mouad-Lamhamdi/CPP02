/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molamham <molamham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 15:42:07 by molamham          #+#    #+#             */
/*   Updated: 2026/01/09 22:46:49 by molamham         ###   ########.fr       */
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

        //comparison operators
        bool operator>(const Fixed& other) const;
        bool operator<(const Fixed& other) const;
        bool operator>=(const Fixed& other) const;
        bool operator<=(const Fixed& other) const;
        bool operator==(const Fixed& other) const;
        bool operator!=(const Fixed& other) const;
        
        Fixed operator+(const Fixed& other) const;
        Fixed operator-(const Fixed& other) const;
        Fixed operator*(const Fixed& other) const;
        Fixed operator/(const Fixed& other) const;

        Fixed& operator++();
        Fixed operator++(int);
        Fixed& operator--();
        Fixed operator--(int);
};

std::ostream& operator<<(std::ostream& out, Fixed const& f);

#endif