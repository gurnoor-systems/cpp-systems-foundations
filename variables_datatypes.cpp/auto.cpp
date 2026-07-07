#include <iostream>
#include <iomanip> // The library for professional column formatting

int main(){
    auto var1 {12};
    auto var2 {13.0};
    auto var3 {14.0f};
    auto var4 {15.0l};
    auto var5 {'e'};
    
    // Int modifier suffixes
    auto var6 {123u};
    auto var7 {123ul};
    auto var8 {1234ll};

    // using setw(10) to create an invisible 10-character box.
    // using std::left forces the numbers to align to the left side of that box.
    
    std::cout << "var1: " << std::setw(10) << std::left << var1 << "Size of var1: " << sizeof(var1) << " bytes" << std::endl;
    std::cout << "var2: " << std::setw(10) << std::left << var2 << "Size of var2: " << sizeof(var2) << " bytes" << std::endl;
    std::cout << "var3: " << std::setw(10) << std::left << var3 << "Size of var3: " << sizeof(var3) << " bytes" << std::endl;
    std::cout << "var4: " << std::setw(10) << std::left << var4 << "Size of var4: " << sizeof(var4) << " bytes" << std::endl;
    std::cout << "var5: " << std::setw(10) << std::left << var5 << "Size of var5: " << sizeof(var5) << " bytes" << std::endl;
    std::cout << "var6: " << std::setw(10) << std::left << var6 << "Size of var6: " << sizeof(var6) << " bytes" << std::endl;
    std::cout << "var7: " << std::setw(10) << std::left << var7 << "Size of var7: " << sizeof(var7) << " bytes" << std::endl;
    std::cout << "var8: " << std::setw(10) << std::left << var8 << "Size of var8: " << sizeof(var8) << " bytes" << std::endl;

    return 0;
}