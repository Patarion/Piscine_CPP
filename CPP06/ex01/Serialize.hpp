/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 15:11:37 by jgagnon           #+#    #+#             */
/*   Updated: 2023/03/05 15:11:43 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CPP_SERIALIZE_HPP
#define CPP_SERIALIZE_HPP
#include <iostream>

class Data {
public :
    Data();
    Data(Data &cpy);
    ~Data();
    int GetA();
    std::string GetInfo();
    void SetA(int info);
    void SetInfo(std::string info);

    Data &operator=(Data &cpy);

private :
    int         _a;
    std::string _info;
};


#endif //CPP_SERIALIZE_HPP
