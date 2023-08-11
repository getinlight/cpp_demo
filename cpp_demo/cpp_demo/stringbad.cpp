//
//  stringbad.cpp
//  cpp_demo
//
//  Created by Fred Yang on 2023/8/10.
//

#include "stringbad.hpp"
#include <cstring>
#include <iostream>

using namespace std;

int StringBad::num_strings = 0;

StringBad::StringBad(const char *s) {
    len = (int) strlen(s);
    str = new char[len + 1];
    strcpy(str, s);
    num_strings++;
    cout << num_strings << ": \"" << str << "\" object created\n";
}

StringBad::StringBad() {
    len = 4;
    str = new char[4];
    strcpy(str, "C++");
    num_strings++;
    cout << num_strings << ": \"" << str << "\" default object created\n";
}

StringBad::~StringBad() {
    cout << "\"" << str << "\" object deleted.";
    --num_strings;
    cout << num_strings << " left\n";
    delete [] str;
}

ostream & operator<<(ostream & os, const StringBad &st) {
    os << st.str;
    return os;
}
