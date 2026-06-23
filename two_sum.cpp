#include <iostream>
#include <iomanip>

double sum_two(double firstnumber, double secondnumber)
{
    return firstnumber + secondnumber;
}
int main()
{   
    double first_number {35}, second_number {45};
    std::cout<<"First number : "<<first_number<<std::endl;
    std::cout<<"Second number : "<<second_number<<std::endl;

    double sum = first_number + second_number;
    std::cout<<std::fixed <<std::setprecision(2) <<"Sum : "<<sum << std::endl;

    double sum1 = sum_two(99.9, 1.1);                                     //storing a sum of 99.9+1.1 in sum1
    std::cout<<std::fixed <<std::setprecision(2) <<"99.9 + 1.1 = "<<sum1<<std::endl;                         //using sum1, to print the value in the termoinal
    
    double sum2 = sum_two(1111222, 222444);
    std::cout<<std::fixed <<std::setprecision(2) <<"1111222 + 222444 = "<<sum2<<std::endl;
    
    return 0;
}