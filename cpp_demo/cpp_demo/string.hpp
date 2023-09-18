//
//  string.hpp
//  cpp_demo
//
//  Created by Fred Yang on 2023/8/16.
//

#ifndef string_hpp
#define string_hpp

#include <stdio.h>
#include <iostream>

using std::ostream;
using std::istream;

class String {
private:
    char * str;
    int len;
    static int num_strings;
    static const int CINLIM = 80;
public:
    // constructors
    String(const char * s);
    String();
    String(const String &);
    ~String();
    int length() const { return len; }
    // operator
    String & operator=(const String &);
    String & operator=(const char *);
    char & operator[](int i);
    const char & operator[](int i) const;
    // friends
    friend bool operator<(const String &st, const String &st2);
    friend bool operator>(const String &st, const String &st2);
    friend bool operator==(const String &st, const String &st2);
    friend ostream & operator<<(ostream & os, const String & st);
    friend istream & operator>>(istream & is, String & st);
    static int HowMany(){ return num_strings; }
};

#endif /* string_hpp */
