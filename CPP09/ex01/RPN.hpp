#include <stack>
#include <string>
#include <iostream>

class RPN {

public :
    RPN(void);
    RPN(RPN &cpy);
    virtual ~RPN(void);

    void push(int nbr);
    void addTerm(char term);
    void calculate(char term);
    void getSize(void);

private:
    std::stack<int> *tab;
};