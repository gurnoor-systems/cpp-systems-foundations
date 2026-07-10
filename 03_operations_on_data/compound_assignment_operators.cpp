#include <iostream>
int main(){

    int value {45};
    std::cout << "the value is: " << value << "\n";
    
    value += 5;                                                   //value = value + 5  ==>50
    std::cout << "the value after (+= 5) is: " << value << "\n";

    value -= 5;                                                  //value = value - 5   ==>45
    std::cout << "the value after (-=5) is: " << value << "\n";

    value *= 2;                                                  // 45 x 2 = 90
    std::cout << "the value after (*=2) is: " << value << "\n";

    value /= 3;                                                  // 90 / 3 = 30
    std::cout << "the value after (/=3) is: " << value << "\n";

    value %= 11;                                                // 30 % 11 = 8
    std::cout << "the value after (%=11) is: " << value << "\n";

    return 0;
}