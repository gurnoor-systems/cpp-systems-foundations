#include <iostream>

int main(){

    int number1, number2;
    std::cout << "Enter the numbers to be compared:\n";
    std::cout << "number1: ";

    //getting input from the user
    std::cin >> number1;
    std::cout << "number2: ";
    std::cin >> number2;

    std::cout << "==================================\n\tComparing variables\n";
    std::cout << "==================================\n";
    //make bool show up as true/false instead of 1/0.
    std::cout << std::boolalpha;

    std::cout << number1 << " < " << number2 << " : " << (number1 < number2) << "\n";
    std::cout << number1 << " <= " << number2 << " : " << (number1 <= number2) << "\n";
    std::cout << number1 << " > " << number2 << " : " << (number1 > number2) << "\n";
    std::cout << number1 << " >= " << number2 << " : " << (number1 >= number2) << "\n"; 
    std::cout << number1 << " == " << number2 << " : " << (number1 == number2) << "\n";
    std::cout << number1 << " != " << number2 << " : " << (number1 != number2) << "\n";

    return 0; 
}