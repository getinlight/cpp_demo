//
//  AcctABC.hpp
//  cpp_demo
//
//  Created by Fred on 2023/9/23.
//

#ifndef AcctABC_hpp
#define AcctABC_hpp

#include <stdio.h>
#include <iostream>
#include <string>

class AcctABC {
private:
    std::string fullName;
    long acctNum;
    double balance;
protected:
    struct Formatting {
        std::ios_base::fmtflags flag;
        std::streamsize pr;
    };
    const std::string fullNameValue() const { return fullName; };
    long acctNumValue() const { return acctNum; };
    Formatting setFormat() const;
    void restore(Formatting & f) const;
public:
    AcctABC(const std::string &s = "null", long an = -1, double bal = 0.0);
    void deposit(double amt);
    virtual void withdraw(double amt) = 0;
    double balanceValue() { return balance; };
    virtual void viewAcct() const = 0;
    virtual ~AcctABC() {};
};

#endif /* AcctABC_hpp */
