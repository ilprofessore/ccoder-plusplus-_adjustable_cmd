#include <iostream>
#include <string>
#include "decode.hpp"

void decode()
{
    std::cin.ignore();
    std::cout << "\nenter the generated code to be decoded here.\n";
    std::cout << "note that the decode information is only in lowercase.\n\n";
    std::cout << "enter the code to be decoded: ";
    bool exec_success_decode = true;
    std::string code; // strings have a "" around them.
    std::string code_decoded = "";
    std::getline(std::cin, code);
    for (int i = 0; i < code.length(); i++)
    {
        switch (code[i]) // using switch-case instead of if statement.
        {
        case '1': // characeters have a '' around them.
            code_decoded += 'a';
            break; // same algorithm as that of pydcoder.
        case '2':
            code_decoded += 'b';
            break;
        case '3':
            code_decoded += 'c';
            break;
        case '4':
            code_decoded += 'd';
            break;
        case '5':
            code_decoded += 'e';
            break;
        case '6':
            code_decoded += 'f';
            break;
        case '7':
            code_decoded += 'g';
            break;
        case '8':
            code_decoded += 'h';
            break;
        case '9':
            code_decoded += 'i';
            break;
        case '!':
            code_decoded += 'j';
            break;
        case '@':
            code_decoded += 'k';
            break;
        case '#':
            code_decoded += 'l';
            break;
        case '$':
            code_decoded += 'm';
            break;
        case '%':
            code_decoded += 'n';
            break;
        case '^':
            code_decoded += 'o';
            break;
        case '&':
            code_decoded += 'p';
            break;
        case '*':
            code_decoded += 'q';
            break;
        case '(':
            code_decoded += 'r';
            break;
        case ')':
            code_decoded += 's';
            break;
        case '_':
            code_decoded += 't';
            break;
        case '+':
            code_decoded += 'u';
            break;
        case '-':
            code_decoded += 'v';
            break;
        case '=':
            code_decoded += 'w';
            break;
        case '<':
            code_decoded += 'x';
            break;
        case '>':
            code_decoded += 'y';
            break;
        case '?':
            code_decoded += 'z';
            break;
        case '|':
            code_decoded += ' ';
            break;
        case '`':
            code_decoded += ',';
            break;
        case '~':
            code_decoded += '.';
            break;
        default:
            if (exec_success_decode)
            {
                std::cout << "\ninstructions not followed properly.\nno stable decode generated.\n\n";
                exec_success_decode = false;
            }
        } // no decode shall be generated if even a single char is wrong.
    }
    if (exec_success_decode)
    {
        std::cout << "\nthe generated decode is: " << code_decoded << "\n\n";
    }
    else
    {
        std::cout << "an unstable version of the decode is displayed below;\n\n" << code_decoded << "\n\n";
    }
    
}