/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:29:12 by jgagnon           #+#    #+#             */
/*   Updated: 2023/02/27 14:29:14 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

int main(void){

    Fixed   instance1;
    Fixed   instance2(instance1);
    Fixed   instance3;

    instance3 = instance2;

    std::cout << instance1.getRawBits() << std::endl;
    std::cout << instance2.getRawBits() << std::endl;
    std::cout << instance3.getRawBits() << std::endl;

    return 0;
}
