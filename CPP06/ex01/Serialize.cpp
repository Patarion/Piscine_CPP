//
// Created by Jasmin Gagnon on 2/15/23.
//

#include "Serialize.hpp"

Data::Data() : _a(17), _info("DUO-TANGS")
{

}
Data::Data(Data &cpy) : _a(cpy._a), _info(cpy._info)
{

}
Data::~Data()
{

}
int Data::GetA()
{
    return this->_a;
}
std::string Data::GetInfo()
{
    return this->_info;
}
void Data::SetA(int info)
{
    _a = info;
}
void Data::SetInfo(std::string info)
{
    _info = info;
}