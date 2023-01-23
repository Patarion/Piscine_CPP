#include"Fixed.hpp"

int main(void){

    Fixed   instance1;
    Fixed   instance2(instance1);
    Fixed   instance3;

    instance3 = instance2;

    std::cout << instance1._getRawBits() << std::endl;
    std::cout << instance2._getRawBits() << std::endl;
    std::cout << instance3._getRawBits() << std::endl;

    return 0;
}