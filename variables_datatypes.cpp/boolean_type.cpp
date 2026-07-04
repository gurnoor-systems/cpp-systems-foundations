#include <iostream>
int main()
{
    bool red_light{true};
    bool green_light{false};

    if (red_light){
        std::cout << "Stop!" << std::endl;
    }
    else{
        std::cout << "Go through!" << std::endl;
    }

    if (green_light){
        std::cout << "The light is green!" << std::endl;
    }
    else{
        std::cout << "The light is not green!" << std::endl;
    }

    std::cout << "-------------------------------------------" << std::endl;

    // sizeof(boolean)
    std::cout << "sizeof(bool): " << sizeof(bool) << std::endl;

    // Printing out a boolean
    // 1 --> true
    // 0 --> false
    std::cout << "-------------------------------------------" << std::endl;

    std::cout << "green_light: " << green_light << std::endl; // 0
    std::cout << "red_light: " << red_light << std::endl;     // 1

    std::cout << "-------------------------------------------" << std::endl;

    std::cout << std::boolalpha;

    std::cout << "green_light: " << green_light << std::endl; // false
    std::cout << "red_light: " << red_light << std::endl;     // true

    return 0;
}