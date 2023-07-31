//
//  stack.hpp
//  cpp_demo
//
//  Created by Fred Yang on 2023/7/31.
//

#ifndef stack_hpp
#define stack_hpp

#include <stdio.h>

typedef unsigned long Item;

class Stack {
private:
    enum { MAX = 10 };
    Item items[MAX];
    int top;
public:
    Stack();
    bool isempty() const;
    bool isfull() const;
    bool push(const Item &item);
    bool pop(Item & item);
};

#endif /* stack_hpp */
