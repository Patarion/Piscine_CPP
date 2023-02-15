//
// Created by Jasmin Gagnon on 2/15/23.
//

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

private :
    int         _a;
    std::string _info;
};


#endif //CPP_SERIALIZE_HPP
