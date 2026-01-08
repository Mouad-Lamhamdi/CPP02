/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouad <mouad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 10:29:22 by molamham          #+#    #+#             */
/*   Updated: 2026/01/04 15:28:05 by mouad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main()
{
    Fixed a(12);
    Fixed const b(42.44f);
    std::cout << b.getRawBits() << std::endl;
    std::cout << b.toFloat() << std::endl;
    std::cout << b.toInt() << std::endl;
    return 0;
}
