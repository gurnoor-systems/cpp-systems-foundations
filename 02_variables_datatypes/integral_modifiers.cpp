#include <iostream>

int main(){

    std::cout<<"Size of int: "<<sizeof(int)<<"\n";
    //unsigned range = [0 ~ 2*n-1]
    //signed range = [-2*(n-1) ~ (2*(n-1)-1)]       where n is the number of bits that datatype uses

    // for unsigned int = [0, 2*16-1] = [0, 4,29,49,67,295]
    // for signed int = [-2*(16-1) ~ (2*(16-1)-1)] = [-2,14,74,83,648, 2147483647]

   short short_var {-32768} ; // 2 Bytes
   short int short_int {455} ; //
   signed short signed_short {122}; //
   signed short int signed_short_int {-456}; //
   unsigned short int unsigned_short_int {456};

   int int_var {55} ; // 4 bytes
   signed signed_var {66};//
   signed int signed_int {77};//
   unsigned int unsigned_int{77};

   long long_var {88}; // 4 OR 8 Bytes
   long int long_int {33};
   signed long signed_long {44};
   signed long int signed_long_int {44};
   unsigned long int unsigned_long_int{44};

   long long long_long {888};// 8 Bytes
   long long int long_long_int {999};
   signed long long signed_long_long {444};
   signed long long int signed_long_long_int{1234};
   unsigned long long int unsigned_long_long_int{1234};
   
   std::cout << "short var:              " << short_var              << "  size: " << sizeof(short_var)              << "\n";
   std::cout << "short int:              " << short_int              << "  size: " << sizeof(short_int)              << "\n";
   std::cout << "signed short:           " << signed_short           << "  size: " << sizeof(signed_short)           << "\n";
   std::cout << "signed short int:       " << signed_short_int       << "  size: " << sizeof(signed_short_int)       << "\n";
   std::cout << "unsigned short int:     " << unsigned_short_int     << "  size: " << sizeof(unsigned_short_int)     << "\n";

   std::cout << "int var:                " << int_var                << "  size: " << sizeof(int_var)                << "\n";
   std::cout << "signed var:             " << signed_var             << "  size: " << sizeof(signed_var)             << "\n";
   std::cout << "signed int:             " << signed_int             << "  size: " << sizeof(signed_int)             << "\n";
   std::cout << "unsigned int:           " << unsigned_int           << "  size: " << sizeof(unsigned_int)           << "\n";
     
   std::cout << "long var:               " << long_var               << "  size: " << sizeof(long_var)               << "\n";
   std::cout << "long int:               " << long_int               << "  size: " << sizeof(long_int)               << "\n";
   std::cout << "signed long:            " << signed_long            << "  size: " << sizeof(signed_long)            << "\n";
   std::cout << "signed long int:        " << signed_long_int        << "  size: " << sizeof(signed_long_int)        << "\n";
   std::cout << "unsigned long int:      " << unsigned_long_int      << "  size: " << sizeof(unsigned_long_long_int) << "\n";
   
   std::cout << "long long:              " << long_long              << "  size: " << sizeof(long_long)              << "\n";
   std::cout << "long long int:          " << long_long_int          << "  size: " << sizeof(long_long_int)          << "\n";
   std::cout << "signed long long:       " << signed_long_long       << "  size: " << sizeof(signed_long_long)       << "\n";
   std::cout << "signed long long int:   " << signed_long_long_int   << "  size: " << sizeof(signed_long_long_int)   << "\n";
   std::cout << "unsigned long long int: " << unsigned_long_long_int << "  size: " << sizeof(unsigned_long_long_int) << "\n";  

   return 0;

}
     