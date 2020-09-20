#include <iostream>
#include <string>
#include "code.hpp"
#include "decode.hpp"

int main()
{
    char decision;
    std::cout << "\n" << "CODER AND DECODER V1.0 MODULAR c++ version | by __ilprofessore\n\n";
    std::cout << "alternate syntax: '0 <code>' to encode and '1 <decode>' to decode.\n";
    std::cout << "enter 0 to code or 1 to decode: ";
    std::cin >> decision;
    switch (decision)
    {
    case '0':
        code();
        getchar(); // a kind of pause for exit.
        break;
    case '1':
        decode();
        getchar();
        break;
    default:
        std::cout << "\ninvalid entry, try again!\n\n";
        getchar();
        break;
    }
    return 0;
}