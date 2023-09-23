//
//  dma.hpp
//  cpp_demo
//
//  Created by Fred on 2023/9/23.
//

#ifndef dma_hpp
#define dma_hpp

#include <stdio.h>
#include <istream>

class BaseDMA {
private:
    char *label;
    int rating;
public:
    BaseDMA(const char *l = "null", int r = 0);
    BaseDMA(const BaseDMA &rs);
    virtual ~BaseDMA();
    BaseDMA & operator=(const BaseDMA & rs);
    friend std::ostream & operator<<(std::ostream & os, const BaseDMA & rs);
};

class LackDMA

#endif /* dma_hpp */
