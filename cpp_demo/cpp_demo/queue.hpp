//
//  queue.hpp
//  cpp_demo
//
//  Created by Fred Yang on 2023/9/18.
//

#ifndef queue_hpp
#define queue_hpp

#include <stdio.h>
#include "string.hpp"

typedef String Item;

class Queue {
private:
    struct Node {
        Item item;
        struct Node *next;
    };
    enum { Q_SIZE = 10 };
    Node *front;
    Node *rear;
    int items;
    const int qsize;
public:
    Queue(int qs = Q_SIZE);
    ~Queue();
    bool isempty() const { return items == 0; }
    bool isfull() const { return items == qsize; }
    int queuecount() const { return qsize; }
    bool enqueue(const Item &item);
    bool dequeue(Item &item);
};

#endif /* queue_hpp */
