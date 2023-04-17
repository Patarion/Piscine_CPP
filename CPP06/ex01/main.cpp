/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 15:12:02 by jgagnon           #+#    #+#             */
/*   Updated: 2023/03/05 15:12:04 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Serialize.hpp"
#include <cstdint>

uintptr_t serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data*>(raw));
}

int main (void)
{
    Data *test;
    Data *decrypt;
    uintptr_t addr;

    test = new Data();
    std::cout << test->GetA() << " " << test->GetInfo() << std::endl;
    std::cout << test << std::endl;
    addr = serialize(test);
    std::cout << "Numéro de série du Jean-Luc Mongrain : " << addr << std::endl;
    decrypt = deserialize(addr);
    std::cout << decrypt << std::endl;
    std::cout << "Info de la copie auxilliaire de Mr. Mongrain" << std::endl;
    if (decrypt->GetA() == test->GetA())
    {
        std::cout << "Clone de Mongrain réussi!" << std::endl;
        std::cout << decrypt->GetA() << " " << decrypt->GetInfo();
    }
    delete test;
}
