#include "funca.h"
#include "funcb.h"
#include <iostream>

int main() {
    int num;
    std::cout << "please input a number:" << std::endl;
    std::cin >> num;
    std::cout << funca::cout(num) << std::endl;
    std::cout << funcb::cout(num) << std::endl;
    return 0;
}
