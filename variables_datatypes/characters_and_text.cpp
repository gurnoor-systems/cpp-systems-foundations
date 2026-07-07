#include <iostream>

int main(){

    char character1 {'a'};
    char character2 {'r'};
    char character3 {'r'};
    char character4 {'o'};
    char character5 {'w'};

    std::cout << "character1: "<< character1 << std::endl; 
    std::cout << "character2: "<< character2 << std::endl;
    std::cout << "character3: "<< character3 << std::endl;
    std::cout << "character4: "<< character4 << std::endl;
    std::cout << "character5: "<< character5 << std::endl;
    
    //One byte in memory: 2^8 = 256 different values (0 ~ 255)
    std::cout<<"---------------------------------------------------"<<std::endl;

    char value = 65 ; // ASCII character code for 'A'

    std::cout << "Value: "<< value << std::endl;                         //Gives the output as a character as being a Char. here 'A' 
    std::cout << "value(int): " << int(value) << std::endl; 
    std::cout << "value(int): " << static_cast<int>(value) << std::endl;   //static_cast<int>(value)  --> value here takes the value of int and is shown in the terminal as an int only.

    return 0;
}