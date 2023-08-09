//
//  main.cpp
//  cpp_demo
//
//  Created by Fred Yang on 2023/7/31.
//

#include <iostream>
#include <cctype>

#include "stack.hpp"
#include "mytime0.hpp"

//int main(int argc, const char * argv[]) {
//    using namespace std;
//    Stack st;
//    char ch;
//    unsigned long po;
//    cout << "Please enter A to add a purchase order,\n"
//    << "P to process a PO, or Q to quit.\n";
//    while (cin >> ch && toupper(ch) != 'Q') {
//        // 清空cin内部的其他自负
//        while (cin.get() != '\n') {
//            continue;
//        }
//        if (!isalpha(ch)) {
//            cout << '\a';
//            continue;
//        }
//        switch (ch) {
//            case 'A':
//            case 'a':
//                cout << "Enter a PO number to add: ";
//                cin >> po;
//                if (st.isfull()) {
//                    cout << "stack already full\n";
//                } else {
//                    st.push(po);
//                }
//                break;
//            case 'P':
//            case 'p':
//                if (st.isempty()) {
//                    cout << "stack already empty\n";
//                } else {
//                    st.pop(po);
//                    cout << "PO #" << po << "poped\n";
//                }
//                break;
//            default:
//                break;
//        }
//        cout << "Please enter A to add a purchase order,\n"
//        << "P to process a PO, or Q to quit.\n";
//    }
//    cout << "Bye\n";
//    return 0;
//}

int main() {
    using namespace std;
    Time planning;
    Time coding(2, 40);
    Time fixing(5, 55);
    Time total;
    
    cout << "planning time = ";
    planning.show();
    
    cout << "coding time = ";
    coding.show();
    
    cout << "fixing time = ";
    fixing.show();
    
    total = coding + fixing;
    cout << "coding.sum(fixing) = ";
    total.show();
    
    return 0;
}
