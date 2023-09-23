//
//  Brass.hpp
//  cpp_demo
//
//  Created by Fred on 2023/9/23.
//

#ifndef Brass_hpp
#define Brass_hpp

#include <stdio.h>
#include <string>

class Brass {
private:
    std::string fullName;
    long acctNum;
double balance;
public:
    Brass(const std::string &s = "none", long an = -1, double bal = 0.0);
    void deposit(double amt);
    virtual void withdraw(double amt);
    double balanceValue() const { return balance; };
    virtual void viewAcct() const;
    virtual ~Brass();
};

class BrassPlus: public Brass {
private:
    double maxLoan;
    double rate;
    double owesBank;
public:
    BrassPlus(const std::string &s = "none", long an = -1,
              double bal = 0.0, double ml = 500, double r = 0.11125);
    BrassPlus(const Brass & ba, double ml = 500,
              double r = 0.11125);
    virtual void viewAcct() const;
    virtual void withdraw(double amt);
    void resetMax(double m) { maxLoan = m; };
    void resetRate(double r) { rate = r; };
    void resetOwes() { owesBank = 0; };
};

#endif /* Brass_hpp */
