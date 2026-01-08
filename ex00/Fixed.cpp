/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouad <mouad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 17:08:42 by molamham          #+#    #+#             */
/*   Updated: 2026/01/04 15:25:09 by mouad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


int Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fixedPointValue;
}

void Fixed::setRawBits(int const raw){
    std::cout << "setRawBits member function called" << std::endl;
    this->_fixedPointValue = raw;
}

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