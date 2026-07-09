#include <iostream>

int main(){

    int value {5};
    //Increment by one
    value = value + 1;  //6
    std::cout << "The value is: " << value << "\n";   //6

    value = 5;  //resetting value to 5 

    //Decrement by one

    value = value - 1;
    std::cout << "The value is: " << value << "\n";    //4

    //=================================================

    std::cout << "================Postfix increment and decrement================" << "\n";

    //reset vaue to 5
    value = 5;

    std::cout << "The value is (incrementing) : " << value++ << "\n";
    std::cout << "The value is : " << value << "\n";      //6

    std::cout << std::endl;

    //Decrement with postfix

    //Reset value to 5
    value = 5;

    std::cout << "The value is (decrementing) : " << value-- << "\n";
    std::cout << "The value is : " << value << "\n";  //4

    std::cout << "================Prefix increment and decrement================" << "\n";

    //reset value to 5
    value = 5;

    std::cout << "The value is (incrementing) : " << ++value << "\n"; //6
    std::cout << "The value is : " << value << "\n";    //6

    std::cout << std::endl;

    //Decrement with prefix

    //Reset value to 5
    value = 5;

    std::cout << "The value is (decrementing) : " << --value << "\n";  //4
    std::cout << "The value is : " << value << "\n";  //4
    return 0;
}