/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouad <mouad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 09:57:08 by molamham          #+#    #+#             */
/*   Updated: 2026/01/04 20:04:34 by mouad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Default constructor
Fixed::Fixed(){
    std::cout << "Default constructor called" << std::endl;
    _fixedPointValue = 0;
}

// Copy constructor
Fixed::Fixed(const Fixed &src){
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

// Copy assignment operator
Fixed &Fixed::operator=(const Fixed &src){
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &src){
        this->_fixedPointValue = src.getRawBits();
    }
    return *this;
}

//Desturctor
Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

// getRawBits
int Fixed::getRawBits() const{
    std::cout << "getRawBits member function called" << std::endl;
    return _fixedPointValue;
}

// setRawBits
void Fixed::setRawBits(int const raw){
    std::cout << "setRawBits member function called" << std::endl;
    this->_fixedPointValue = raw;
}

// int constructor
Fixed::Fixed(const int n){
    std::cout << "Int constructor called" << std::endl;
    _fixedPointValue = n << _fractionalBits;
}

// float constructor
Fixed::Fixed(const float n){
    std::cout << "Float constructor called" << std::endl;
    _fixedPointValue = roundf(n * (1 << _fractionalBits));
}

// convert to float
float Fixed::toFloat(void) const{
    float value;
    value = (float)_fixedPointValue / (1 << _fractionalBits);
    return value;
}

// convert to int
int Fixed::toInt(void) const {
    return this->_fixedPointValue >> _fractionalBits;
}
