/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molamham <molamham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 15:42:58 by molamham          #+#    #+#             */
/*   Updated: 2026/01/11 18:26:32 by molamham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {

    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    std::cout << b << std::endl;
    
    std::cout << Fixed::max( a, b ) << std::endl;
    return 0;
}

// int main() {
//     Fixed a(10);          // 10.0
//     Fixed b(3.5f);        // 3.5

//     // Comparisons
//     std::cout << "Comparisons:" << std::endl;
//     std::cout << "a > b: " << (a > b) << std::endl;   // 1 (true)
//     std::cout << "a < b: " << (a < b) << std::endl;   // 0 (false)
//     std::cout << "a >= b: " << (a >= b) << std::endl; // 1 (true)
//     std::cout << "a <= b: " << (a <= b) << std::endl; // 0 (false)
//     std::cout << "a == b: " << (a == b) << std::endl; // 0 (false)
//     std::cout << "a != b: " << (a != b) << std::endl; // 1 (true)

//     std::cout << "\nArithmetic:" << std::endl;
//     Fixed add = a + b;
//     Fixed sub = a - b;
//     Fixed mul = a * b;
//     Fixed div = a / b;

//     std::cout << "a + b = " << add << std::endl; // 13.5
//     std::cout << "a - b = " << sub << std::endl; // 6.5
//     std::cout << "a * b = " << mul << std::endl; // 35
//     std::cout << "a / b = " << div << std::endl; // 2.85714

//     return 0;
// }