#include <iostream>
#include <iomanip>

int main(){
    auto var1 {12};
    auto var2 {13.0};
    auto var3 {14.0f};
    auto var4 {15.0L};
    auto var5 {'e'};
    
    auto var6 {123u};
    auto var7 {123ul};
    auto var8 {123411ll};

    // Setting the alignment once for the entire program
    std::cout << std::left;

    std::cout << std::setw(25) << "int var1: "               << std::setw(10) << var1 << "Size of var1: " << sizeof(var1) << " bytes\n";
    std::cout << std::setw(25) << "double var2: "            << std::setw(10) << var2 << "Size of var2: " << sizeof(var2) << " bytes\n";
    std::cout << std::setw(25) << "float var3: "             << std::setw(10) << var3 << "Size of var3: " << sizeof(var3) << " bytes\n";
    std::cout << std::setw(25) << "long double var4: "       << std::setw(10) << var4 << "Size of var4: " << sizeof(var4) << " bytes\n";
    std::cout << std::setw(25) << "character var5: "         << std::setw(10) << var5 << "Size of var5: " << sizeof(var5) << " bytes\n";
    std::cout << std::setw(25) << "unsigned int var6: "      << std::setw(10) << var6 << "Size of var6: " << sizeof(var6) << " bytes\n";
    std::cout << std::setw(25) << "unsigned long int var7: " << std::setw(10) << var7 << "Size of var7: " << sizeof(var7) << " bytes\n";
    std::cout << std::setw(25) << "long long var8: "         << std::setw(10) << var8 << "Size of var8: " << sizeof(var8) << " bytes\n";

    return 0;
}