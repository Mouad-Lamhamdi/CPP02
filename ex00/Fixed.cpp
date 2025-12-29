/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molamham <molamham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 17:08:42 by molamham          #+#    #+#             */
/*   Updated: 2025/12/29 17:33:05 by molamham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
    _fixedPointValue = 0;
}

int Fixed::getRawBits(void) const{
    return this->_fixedPointValue;
}

void Fixed::setRawBits(int const raw){
    this->_fixedPointValue = raw;
}