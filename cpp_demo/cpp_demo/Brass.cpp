//
//  Brass.cpp
//  cpp_demo
//
//  Created by Fred on 2023/9/23.
//

#include "Brass.hpp"
#include <iostream>

using std::cout;
using std::endl;
using std::string;

typedef std::ios_base::fmtflags format;
typedef std::streamsize precis;

format setFormat();
void restore(format f, precis p);

Brass::Brass(const std::string &s, long an, double bal) {
    fullName = s;
    acctNum = an;
    balance = bal;
}

void Brass::deposit(double amt) {
    if (amt < 0) {
        cout << "Negative deposit not allowed.\n";
    } else {
        balance += amt;
    }
}


void Brass::withdraw(double amt) {
    // set up ###.## format
    format initialState = setFormat();
    precis prec = cout.precision(2);
    
    if (amt < 0) {
        cout << "Withdrawal amount must be positive.\n";
    } else if (amt <= balance) {
        balance -= amt;
    } else {
        cout << "Withdrawal amount of $" << amt << " exceeds your balance.\n";
    }
    restore(initialState, prec);
}

void Brass::viewAcct() const {
    // set up ###.## format
    format initialState = setFormat();
    precis prec = cout.precision(2);
    
    cout << "Client: " << fullName << endl;
    cout << "Account number: " << acctNum << endl;
    cout << "Balance: $" << balance << endl;
    restore(initialState, prec);
}

BrassPlus::BrassPlus(const std::string &s, long an,
                     double bal, double ml, double r): Brass(s, an, bal) {
    maxLoan = ml;
    rate = r;
    owesBank = 0.0;
}

BrassPlus::BrassPlus(const Brass & ba, double ml,
                     double r) : Brass(ba) {
    maxLoan = ml;
    rate = r;
    owesBank = 0.0;
}

void BrassPlus::viewAcct() const {
    // set up ###.## format
    format initialState = setFormat();
    precis prec = cout.precision(2);
    Brass::viewAcct();
    cout << "Maximum loan: $" << maxLoan << endl;
    cout << "Owed to bank: $" << owesBank << endl;
    cout.precision(3);
    cout << "Loan Rate: "<< 100 * rate << "%\n";
    restore(initialState, prec);
}

void BrassPlus::withdraw(double amt) {
    // set up ###.## format
    format initialState = setFormat();
    precis prec = cout.precision(2);
    double bal = balanceValue();
    if (amt <= bal) {
        Brass::withdraw(amt);
    } else if (amt <= bal + maxLoan - owesBank) {
        double advice = amt - bal;
        owesBank += advice * (1.0 + rate);
        cout << "Bank advice: $" << advice << endl;
        cout << "Finance charge: $" << advice * rate << endl;
        deposit(advice);
        Brass::withdraw(amt);
    } else {
        cout << "Credit limit exceeded.\n";
    }
    restore(initialState, prec);
}

format setFormat() {
    return cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
}

void restore(format f, precis p) {
    cout.setf(f, std::ios_base::floatfield);
    cout.precision(p);
}
