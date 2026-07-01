#include <iostream>

int product_two(int firstnumber, int secondnumber)
{
    return firstnumber * secondnumber;
}
int main()
{
    int first_number{35}, second_number{45};
    std::cout << "First number : " << first_number << std::endl;
    std::cout << "Second number : " << second_number << std::endl;

    int product = first_number * second_number;
    std::cout << "Product : " << product << std::endl;

    int product1 = product_two(9991, 15);
    std::cout << "9991 X 15 = " << product1 << std::endl; // using product1, to print the value in the terminal using product_two function

    int product2 = product_two(1111222, 44);
    std::cout << "1111222 X 44 = " << product2 << std::endl;
    return 0;
}