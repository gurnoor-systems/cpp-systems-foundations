#include <iostream>
#include <string>

int main(){
    int age;
    std::string name;

    std::cout << "Enter your full name: ";

    std::getline(std::cin, name);

    std::cout << "Please type in your age: ";

    std::cin >> age;

    std::cout << "Hello " << name << " you are " << age <<" years old!" <<std::endl;

    return 0;
}