//
//  string.cpp
//  cpp_demo
//
//  Created by Fred Yang on 2023/8/16.
//

#include "string.hpp"

using namespace std;

String::String() {
    len = 0;
//    str = new char[1];
//    str[0] = '\0';
    str = nullptr;
}

String & String::operator=(const String &st) {
    if (this == &st) {
        return *this;
    }
    delete [] str;
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);
    return *this;
}

String & String::operator=(const char *s) {
    delete [] str;
    len = (int)std::strlen(s);
    str = new char [len + 1];
    std::strcpy(str, s);
    return *this;
}

bool operator<(const String &st, const String &st2) {
    return (strcmp(st.str, st2.str) < 0);
}

char & String::operator[](int i) {
    return str[i];
}

const char & String::operator[](int i) const {
    return str[i];
}

std::istream & operator>>(std::istream & is, String & st) {
    char temp[String::CINLIM];
    is.get(temp, String::CINLIM);
    if (is) {
        st = temp;
    }
    while (is && is.get() != '\n') {
        continue;
    }
    return is;
}
