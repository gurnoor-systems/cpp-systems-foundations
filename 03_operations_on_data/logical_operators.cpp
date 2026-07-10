#include <iostream>
int main(){

    bool a {true};
    bool b {false};
    bool c {true};

    int d{45};
    int e{20};
    int f{11};

    std::cout << std::boolalpha;        
    
    std::cout << "a : " << a << "\n";
    std::cout << "b : " << b << "\n";
    std::cout << "c : " << c << "\n";
    std::cout << "d : " << d << "\n";
    std::cout << "e : " << e << "\n";
    std::cout << "f : " << f << "\n";
    
    std::cout << "========================================================\n";
    std::cout << "\tRelational and logic operations on integers\n";
    std::cout << "==========================================================\n";

    std::cout << "(d > e) && (d > f) : " << ((d > e) && (d > f))   << "\n";        // && => AND, evaluated to true if all operands are true 
    std::cout << "(d==e) || (e <= f) : "   <<  ((d==e) || (e <= f )) << "\n";        // || => OR, evaluates to true if even one operand is true.
    std::cout << "(d < e) || (d > f) : "   << ((d < e) || (d > f))   << "\n";
    std::cout << "(f > e) || (d < f) : "   << ((f > e) || (d < f))   << "\n";
    std::cout << "(d > f) && (f <= d) : "  << ((d > f) && (f <= d))  << "\n";
    std::cout << "(d > e) && (d <= f) : "  << ((d > e) && (d <= f))  << "\n";

    // Using NOT(!) -> Negates the operand 
    std::cout << "(! a) && (d == e) : "    <<   ((! a) && (d == e))  << "\n";
    std::cout << "(! b) && (d != e) : "    <<   ((! b) && (d != e))  << "\n";
    std::cout << "(! c) && (d != e) : "    <<   ((! c) && (d != e))  << "\n";   // as !c == false. Due to compiler's short circuit evaluation, it doesnt evaluate (d != e) .saving execution speed

    return 0;
}