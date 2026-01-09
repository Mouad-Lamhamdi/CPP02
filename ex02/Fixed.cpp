/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molamham <molamham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 15:42:39 by molamham          #+#    #+#             */
/*   Updated: 2026/01/09 22:56:44 by molamham         ###   ########.fr       */
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

//operator overloading
std::ostream& operator<<(std::ostream& out, Fixed const& f)
{
    out << f.toFloat();
    return out;
}

bool Fixed::operator>(const Fixed& other) const{
    return this->_fixedPointValue > other._fixedPointValue;
}

bool Fixed::operator<(const Fixed& other) const{
    return this->_fixedPointValue < other._fixedPointValue;
}

bool Fixed::operator>=(const Fixed& other) const{
    return this->_fixedPointValue >= other._fixedPointValue;
}

bool Fixed::operator<=(const Fixed& other) const{
    return this->_fixedPointValue <= other._fixedPointValue;
}

bool Fixed::operator==(const Fixed& other) const{
    return this->_fixedPointValue == other._fixedPointValue;
}

bool Fixed::operator!=(const Fixed& other) const{
    return this->_fixedPointValue != other._fixedPointValue;
}

Fixed Fixed::operator+(const Fixed& other) const{
    Fixed result;

    result.setRawBits(this->_fixedPointValue + other._fixedPointValue);
    return result;
}

Fixed Fixed::operator-(const Fixed& other) const{
    Fixed result;
    
    result.setRawBits(this->_fixedPointValue - other._fixedPointValue);
    return result;
}

Fixed Fixed::operator*(const Fixed& other) const{
    Fixed result;

    result.setRawBits((this->_fixedPointValue * other._fixedPointValue) >> _fractionalBits);
    return result;
} // raw1 = a x 256; raw2 = b x 256; raw1 * raw2 = a x b x 256² so we shift back to x256



Fixed Fixed::operator/(const Fixed& other) const{
    Fixed result;

    result.setRawBits((this->_fixedPointValue << _fractionalBits) / other._fixedPointValue);
    return result;
}

// pre-increment
Fixed& Fixed::operator++(){
    _fixedPointValue += 1;
    return *this;
}

// post-increment
Fixed Fixed::operator++(int){
    Fixed tmp(*this);
    _fixedPointValue += 1;
    return tmp;
}

// pre-decrement
Fixed& Fixed::operator--(){
    _fixedPointValue -= 1;
    return *this;
}

// post-decrement
Fixed Fixed::operator--(int){
    Fixed tmp(*this);
    _fixedPointValue -= 1;
    return tmp;
}