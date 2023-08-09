//
//  mytime0.cpp
//  cpp_demo
//
//  Created by Fred Yang on 2023/8/9.
//

#include "mytime0.hpp"
#include <iostream>

Time::Time() {
    hours = minutes = 0;
}

Time::Time(int h, int m) {
    hours = h;
    minutes = m;
}

void Time::addMin(int m) {
    minutes += m;
    hours += minutes / 60;
    minutes %= 60;
}

void Time::addHr(int h) {
    hours += h;
}

void Time::reset(int h, int m) {
    hours = h;
    minutes = m;
}

Time Time::operator+(const Time &t) const {
    Time sum;
    sum.minutes = minutes + t.minutes;
    sum.hours = hours + t.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}

Time Time::operator-(const Time &t) const {
    Time diff;
    int tot1, tot2;
    tot1 = t.minutes + t.hours * 60;
    tot2 = minutes + hours * 60;
    diff.minutes = (tot2 - tot1) % 60;
    diff.hours = (tot2 - tot1) / 60;
    return diff;
}

Time Time::operator*(double mult) const {
    Time result;
    long totalMin = hours * mult * 60 + minutes * mult;
    result.hours = (int)(totalMin / 60);
    result.minutes = totalMin % 60;
    return result;
}

std::ostream & operator<<(std::ostream &os, const Time &t) {
   os << t.hours << " hours, " << t.minutes << " minutes.\n";
   return os;
}

void Time::show() const {
    std::cout << hours << " hours, " << minutes << " minutes.\n";
}


