/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:53:55 by jgagnon           #+#    #+#             */
/*   Updated: 2023/02/20 15:53:57 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

int main (void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string*     stringPTR = NULL;
    std::string&     stringREF = str;

    stringPTR = &str;
    std::cout << &str << std::endl;
    std::cout << &stringPTR << std::endl;
    std::cout << &stringREF << std::endl;
    std::cout << str << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;
}
