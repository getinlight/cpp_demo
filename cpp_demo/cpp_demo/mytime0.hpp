//
//  mytime0.hpp
//  cpp_demo
//
//  Created by Fred Yang on 2023/8/9.
//

#ifndef mytime0_hpp
#define mytime0_hpp

#include <stdio.h>
#include <ostream>

class Time {
private:
    int hours;
    int minutes;
public:
    Time();
    Time(int h, int m = 0);
    void addMin(int m);
    void addHr(int h);
    void reset(int h = 0, int m = 0);
    Time operator+(const Time &t) const;
    Time operator-(const Time &t) const;
    Time operator*(double mult) const;
    friend Time operator*(double m, const Time &t) {
        return t * m;
    }
    friend std::ostream & operator<<(std::ostream &os, const Time &t);
    void show() const;
};

#endif /* mytime0_hpp */
