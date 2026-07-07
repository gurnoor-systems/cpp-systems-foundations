#include <iostream>
#include <iomanip>

int main(){

//Declare and initialize the variables
float number1 {1.12345678901234567890f};      //f suffix refers that the number is stored as a float in the memory -> precision=7, size=4
double number2 {1.12345678901234567890};        //precision=15, size=8
long double number3 {1.12345678901234567890L};   //L suffix refers that the number is stored as a long double in the memory -> precision=15+, size=16

//Print out the sizes
std::cout << "sizeof float : " << sizeof(float) << std::endl;
std::cout << "sizeof double : " << sizeof(double) << std::endl;
std::cout << "sizeof long double : " << sizeof(long double) << std::endl;

//precision
std::cout<<std::setprecision(20);   //controlling the precision from std::cout
std::cout<<"number1 is: "<<number1<<std::endl;
std::cout<<"number2 is: "<<number2<<std::endl;
std::cout<<"number3 is: "<<number3<<std::endl;

return 0;
}