//
//  RatedPlayer.hpp
//  cpp_demo
//
//  Created by Fred on 2023/9/23.
//

#ifndef RatedPlayer_hpp
#define RatedPlayer_hpp

#include <stdio.h>
#include "tabtenn0.hpp"

class RatedPlayer : public TableTennisPlayer {
private:
    unsigned int rating;
public:
    RatedPlayer(unsigned int r = 0, const string & fn = "none",
                const string & ln = "none", bool ht = false);
    RatedPlayer(unsigned int r, const TableTennisPlayer & tp);
    unsigned int ratingValue() const { return rating; };
    void resetRating(unsigned int r) { rating = r; };
};

#endif /* RatedPlayer_hpp */
