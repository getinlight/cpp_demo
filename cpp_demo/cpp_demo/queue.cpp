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
    } else if (rear == NULL) {
        front->next = add;
        rear = add;
    } else {
        rear->next = add;
        rear = add;
    }
    return true;
}

bool Queue::dequeue(Item &item) {
    if (front == NULL) {
        return false;
    }
    item = front->item;
    items--;
    Node *temp = front;
    front = front->next;
    delete temp;
    if (items == 0) {
        rear = NULL;
    }
    return true;
}

Queue::~Queue() {
    Node *temp;
    while (front != NULL) {
        temp = front;
        front = front->next;
        delete temp;
    }
}
