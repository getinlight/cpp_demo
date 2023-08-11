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
#include "stonewt.hpp"
#include "stringbad.hpp"

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

//int main() {
//    using namespace std;
//    Time planning;
//    Time coding(2, 40);
//    Time fixing(5, 55);
//    Time total;
//
//    cout << "planning time = ";
//    planning.show();
//
//    cout << "coding time = ";
//    coding.show();
//
//    cout << "fixing time = ";
//    cout << fixing;
//
//    total = coding + fixing;
//    cout << "coding.sum(fixing) = ";
//    cout << total;
//
//    return 0;
//}

//int main() {
//    Stonewt myCat;
//    myCat = (Stonewt) 19.6;
//    myCat.show_lbs();
//}

//int main() {
//    using namespace std;
//    Stonewt poppins(9, 2.8);
//    double p_wt = poppins;
//    cout << "Convert to double => ";
//    cout << "Poppins: " << p_wt << " pounds.\n";
//}

void callme1(StringBad &);// pass by reference
void callme2(StringBad);// pass by value

using namespace std;

int main() {
    {
        cout << "Starting an inner block.\n";
        StringBad headline1("Celery Stalks at Midnight");
        StringBad headline2("Lettuce Pery");
        StringBad sports("Spinach Leaves Bowl for Dollars");
        cout << "headline1: " << headline1 << endl;
        cout << "headline2: " << headline2 << endl;
        cout << "sports: " << sports << endl;
        callme1(headline1);
        cout << "headline1: " << headline1 << endl;
        callme2(headline2);
        cout << "headline2: " << headline2 << endl;
        cout << "Initialize one object to another:\n";
        StringBad sailor = sports;
        cout << "sailor: " << sailor << endl;
        cout << "Assign one object to another:\n";
        StringBad knot;
        knot = headline1;
        cout << "knot: " << knot << endl;
        cout << "Exiting the block.\n";
    }
    cout << "End of main()\n";
    return 0;
}

void callme1(StringBad &rsb) {
    cout << "String passed by reference.\n";
    cout << "   \"" << rsb << "\"\n";
}

void callme2(StringBad sb) {
    cout << "String passed by reference.\n";
    cout << "   \"" << sb << "\"\n";
}

