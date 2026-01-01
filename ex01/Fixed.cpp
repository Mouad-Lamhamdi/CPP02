/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molamham <molamham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 09:57:08 by molamham          #+#    #+#             */
/*   Updated: 2026/01/01 19:13:39 by molamham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int Fixed::getRawBits() const{
    return _fixedPointValue;
}

Fixed::Fixed(const int n){
    std::cout << "Int constructor called" << std::endl;
    _fixedPointValue = n << _fractionalBits;
}

Fixed::Fixed(const float n){
    std::cout << "Float constructor called" << std::endl;
    _fixedPointValue = roundf(n * (1 << _fractionalBits));
}

float Fixed::toFloat(void) const{
    float value;
    value = (float)_fixedPointValue / (1 << _fractionalBits);
    return value;
}