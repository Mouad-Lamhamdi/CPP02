/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molamham <molamham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 09:52:19 by molamham          #+#    #+#             */
/*   Updated: 2026/01/01 19:03:31 by molamham         ###   ########.fr       */
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
        Fixed(const int n);
        Fixed(const float n);
        float toFloat() const;
        int getRawBits() const;
        void setRawBits(int const raw);
};


#endif