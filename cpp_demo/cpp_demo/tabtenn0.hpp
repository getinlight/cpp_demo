//
//  tabtenn0.hpp
//  cpp_demo
//
//  Created by Fred on 2023/9/23.
//

#ifndef tabtenn0_hpp
#define tabtenn0_hpp

#include <stdio.h>
#include <string>

using std::string;

class TableTennisPlayer {
private:
    string firstname;
    string lastname;
    bool has_table;
public:
    TableTennisPlayer(const string & fn = "none", const string & ln = "none", bool ht = false);
    void name() const;
    bool hasTable() const { return has_table; };
    void resetTable(bool v) { has_table = v; };
};

#endif /* tabtenn0_hpp */
