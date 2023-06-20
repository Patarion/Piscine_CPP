#include "RPN.hpp"

RPN::RPN(void) {
    tab = new std::stack<int>;
}

RPN::RPN(RPN &cpy){
    this->tab = new std::stack<int>;
    while (!cpy.tab->empty())
    {
        this->tab->push(cpy.tab->top());
        cpy.tab->pop();
    }
}

RPN::~RPN() {}

void RPN::push(int nbr)
{
    tab->push(nbr);
}

void RPN::addTerm(char term) {
    tab->push((term - 0x30));
}