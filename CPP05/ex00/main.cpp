/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 14:55:54 by jgagnon           #+#    #+#             */
/*   Updated: 2023/03/05 14:55:56 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main (void)
{
    Bureaucrat b1("Bob", 160);
    Bureaucrat b2("Larry", -1);
    Bureaucrat b3("George", 50);

    std::cout << b1 << std::endl;
    std::cout << b2 << std::endl;
    std::cout << b3 << std::endl;
    b2.DownGrade();
    b2.DownGrade();
    std::cout << b2 << std::endl;
    b2.UpGrade();
    std::cout << b2 << std::endl;
}
