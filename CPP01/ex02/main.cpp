
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
