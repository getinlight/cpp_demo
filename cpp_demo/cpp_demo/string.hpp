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

class String {
private:
    char *str;
    int len;
    static int num_strings;
    static const int CINLIM = 80;
public:
    String();
    int length() const { return len; }
    String & operator=(const String &);
    String & operator=(const char *);
    friend bool operator<(const String &st, const String &st2);
    friend bool operator>(const String &st, const String &st2);
    friend bool operator==(const String &st, const String &st2);
    friend std::istream & operator>>(std::istream & is, String & st);
    char & operator[](int i);
    const char & operator[](int i) const;
    static int HowMany(){ return num_strings; }
    
};

#endif /* string_hpp */
