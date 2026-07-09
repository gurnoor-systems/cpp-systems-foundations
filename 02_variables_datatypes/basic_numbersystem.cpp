#include <iostream>

int main()
{

    int number1 = 15;         // Decimal
    int number2 = 017;        // Octal -any integer in C++ that begins with a leading zero (like 017) is treated by the compiler as an octal (base-8) number
    int number3 = 0x0f;       // Hexadecimal - starts with  0x or 0X (like 0x1F = (31))
    int number4 = 0b00001111; // Binary -  Native binary literals (0b) are fully supported starting in C++14. Older compilers may require you to use an extension.
    
    /* Digital separators :  You can use a single quote (') to separate large numbers for readability,
        and the compiler will simply ignore them (e.g., 0b1010'1100)*/

    std::cout << "number1: " << number1 << std::endl;
    std::cout << "number2: " << number2 << std::endl;
    std::cout << "number3: " << number3 << std::endl;
    std::cout << "number4: " << number4 << std::endl;
    // Printing outputs: By default, if you print these variables using std::cout, they will automatically convert and display as standard decimal numbers.
    
    return 0;
}
