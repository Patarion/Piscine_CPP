/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 15:09:49 by jgagnon           #+#    #+#             */
/*   Updated: 2023/03/05 15:11:19 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

Data::Data() : _a(17), _info("DUO-TANGS")
{

}
Data::Data(Data &cpy)
{
    *this = cpy;
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

Data & Data::operator=(Data &cpy)
{
    this->_a = cpy.GetA();
    this->_info = cpy.GetInfo();
    return *this;
}
