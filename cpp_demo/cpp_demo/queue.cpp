//
//  queue.cpp
//  cpp_demo
//
//  Created by Fred Yang on 2023/9/18.
//

#include "queue.hpp"

Queue::Queue(int qs) : qsize(qs) {
    front = rear = NULL;
    items = 0;
}

bool Queue::enqueue(const Item &item) {
    if (isfull()) {
        return false;
    }
    Node *add = new Node;
    add->item = item;
    add->next = NULL;
    items++;
    if (front == NULL) {
        front = add;
    } else {
        rear->next = add;
    }
    rear = add;
    return true;
}
