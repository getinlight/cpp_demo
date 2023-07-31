//
//  main.cpp
//  cpp_demo
//
//  Created by Fred Yang on 2023/7/31.
//

#include <iostream>
#include <cctype>

#include "stack.hpp"

int main(int argc, const char * argv[]) {
    using namespace std;
    Stack st;
    char ch;
    unsigned long po;
    cout << "Please enter A to add a purchase order,\n"
    << "P to process a PO, or Q to quit.\n";
    while (cin >> ch && toupper(ch) != 'Q') {
        
    }
    
    return 0;
}
