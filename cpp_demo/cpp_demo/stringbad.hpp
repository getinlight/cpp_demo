//
//  stringbad.hpp
//  cpp_demo
//
//  Created by Fred Yang on 2023/8/10.
//

#ifndef stringbad_hpp
#define stringbad_hpp

#include <stdio.h>
#include <iostream>
#include <ostream>

class StringBad {
private:
    char *str;
    int len;
    static int num_strings;
public:
    StringBad(const char *s);
    StringBad();
    ~StringBad();
    friend std::ostream & operator<<(std::ostream &os, const StringBad &st);
};

#endif /* stringbad_hpp */
