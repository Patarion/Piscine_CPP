
//
// Created by Jasmin Gagnon on 2/15/23.
//
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
    addr = serialize(test);
    std::cout << "Numéro de série du Jean-Luc Mongrain : " << addr << std::endl;
    decrypt = deserialize(addr);
    std::cout << "Info de la copie auxilliaire de Mr. Mongrain" << std::endl;
    if (decrypt->GetA() == test->GetA())
    {
        std::cout << "Clone de Mongrain réussi!" << std::endl;
        std::cout << decrypt->GetA() << " " << decrypt->GetInfo();
    }
}