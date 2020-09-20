#include <iostream>
#include <string>
#include "code.hpp"

void code()
{
    std::cin.ignore();
    std::cout << "\nonly plain text along with commas/fullstops are to be used;\n";
    std::cout << "numbers and/or special characters are not allowed.\n\n";
    bool exec_success_code = true;
    std::string decode;
    std::string decode_lower;
    std::cout << "enter the sentence to be coded: ";
    std::getline(std::cin, decode);
    for (int i = 0; i < decode.length(); i++)
    {
        decode_lower += tolower(decode[i]); // += operator is used to append chars to strings.
    }
    decode = "";
    for (int i = 0; i < decode_lower.length(); i++)
    {
        switch (decode_lower[i]) // switch-case must have int/char as arguments.
        {
        case 'a':
            decode += "1"; // the exact same algorithm as that of pydcoder.
            break;
        case 'b':
            decode += "2";
            break;
        case 'c':
            decode += "3";
            break;
        case 'd':
            decode += "4";
            break;
        case 'e':
            decode += "5";
            break;
        case 'f':
            decode += "6";
            break;
        case 'g':
            decode += "7";
            break;
        case 'h':
            decode += "8";
            break;
        case 'i':
            decode += "9";
            break;
        case 'j':
            decode += "!";
            break;
        case 'k':
            decode += "@";
            break;
        case 'l':
            decode += "#";
            break;
        case 'm':
            decode += "$";
            break;
        case 'n':
            decode += "%";
            break;
        case 'o':
            decode += "^";
            break;
        case 'p':
            decode += "&";
            break;
        case 'q':
            decode += "*";
            break;
        case 'r':
            decode += "(";
            break;
        case 's':
            decode += ")";
            break;
        case 't':
            decode += "_";
            break;
        case 'u':
            decode += "+";
            break;
        case 'v':
            decode += "-";
            break;
        case 'w':
            decode += "=";
            break;
        case 'x':
            decode += "<";
            break;
        case 'y':
            decode += ">";
            break;
        case 'z':
            decode += "?";
            break;
        case ' ':
            decode += "|";
            break;
        case ',':
            decode += "`";
            break;
        case '.':
            decode += "~";
            break;
        default:
            if (exec_success_code)
            {
                std::cout << "\ninstructions not followed properly.\nno stable code generated.\n\n";
                exec_success_code = false;
            }
        } // no decode shall be generated even if a single char is wrong.
    }
    if (exec_success_code)
    {
        std::cout << "\nthe generated code is: " << decode << "\n\n";
    }
    else
    {
        std::cout << "an unstable version of the code is displayed below;\n\n" << decode << "\n\n";
    }
    
}