//
//  tabtenn0.cpp
//  cpp_demo
//
//  Created by Fred on 2023/9/23.
//

#include "tabtenn0.hpp"
#include <iostream>

TableTennisPlayer::TableTennisPlayer(const string & fn, const string & ln, bool ht):
firstname(fn), lastname(ln), has_table(ht) {}

void TableTennisPlayer::name() const {
    std::cout << lastname << ", " << firstname << std::endl;
}


