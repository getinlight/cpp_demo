//
//  stonewt.hpp
//  cpp_demo
//
//  Created by Fred Yang on 2023/8/10.
//

#ifndef stonewt_hpp
#define stonewt_hpp

#include <stdio.h>

class Stonewt {
private:
    static const int Lbs_per_stn = 14;
    int stone;
    double pds_left;
    double pounds;
public:
    explicit Stonewt(double lbs);
    Stonewt(int stn, double lbs);
    Stonewt();
    ~Stonewt();
    void show_lbs() const;
    void show_stn() const;
    operator double() const;
    operator int() const;
};

#endif /* stonewt_hpp */
