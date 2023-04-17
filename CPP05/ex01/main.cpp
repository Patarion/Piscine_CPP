/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 14:56:56 by jgagnon           #+#    #+#             */
/*   Updated: 2023/03/05 14:56:58 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main (void)
{
    Bureaucrat  b1("Bob", 160);
    Bureaucrat  b2("Larry", 25);
    Bureaucrat  b3("George", 51);
    Form        contrat1("B1 : A-38");
    Form        contrat2("B2 : A-38");
    Form        contrat3("B3 : A-38");

    contrat1.beSigned(&b1);
    contrat2.beSigned(&b2);
    contrat3.beSigned(&b3);
    std::cout << contrat1;
    std::cout << contrat2;
    std::cout << contrat3;
//    std::cout << contrat1.getSigne() << std::endl;
//    std::cout << contrat2.getSigne() << std::endl;
//    std::cout << contrat3.getSigne() << std::endl;
    b3.UpGrade();
    b3.signForm(contrat3);
    std::cout << contrat1;
    std::cout << contrat2;
    std::cout << contrat3;
}
