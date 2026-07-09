#include <iostream>
int main(){

    int a{6};
    int b{2};
    int c{9};
    int d{12};
    int e{6};
    int f{2};
    int g{5};

    // '*' and '/' have higher PRECEDENCE than '+' and '-'
    int result = a + b*c - d/e - f + g;    

    //Using parentheses to override default precedence and to make the operations look more cleaner for humans.   
    int result1 = (a + b)*c - (d/e) - (f*g);
    
    // (-7)+18-2-7+5+2 == 9
    int result2 = (b-c) + b*c - d/e - (f + g) + g + b; 

    std::cout << "result 1: " << result << "\n"; 
    std::cout << "result 2: " << result1 << "\n"; 
    std::cout << "result 3: " << result2 << "\n"; 
    return 0;
}