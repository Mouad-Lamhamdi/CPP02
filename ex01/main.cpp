/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molamham <molamham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 10:29:22 by molamham          #+#    #+#             */
/*   Updated: 2026/01/01 19:14:06 by molamham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main()
{
    Fixed a(12);
    Fixed const b(42.44f);
    std::cout << b.getRawBits() << std::endl;
    std::cout << b.toFloat() << std::endl;
    return 0;
}
