//
//  RatedPlayer.cpp
//  cpp_demo
//
//  Created by Fred on 2023/9/23.
//

#include "RatedPlayer.hpp"

RatedPlayer::RatedPlayer(unsigned int r, const string & fn,
                         const string & ln, bool ht) : TableTennisPlayer(fn, ln, ht) {
    rating = r;
}

RatedPlayer::RatedPlayer(unsigned int r, const TableTennisPlayer & tp)
: TableTennisPlayer(tp), rating(r) {}




