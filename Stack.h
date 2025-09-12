//
// Created by Alexa Stevens on 9/12/25.
//

#ifndef LINKED_LIST_STACK_H
#define LINKED_LIST_STACK_H

#include <ostream>

#include "Node.h"
#include <iostream>
using std::cout, std::endl;

template<typename Object>
class Stack {
private:
    Node<Object>* top;

public:
    // Constructor
    Stack() {
        top = nullptr;
    }

    // add a Node to the Stack
    void push(Object item) {
        //Create a new node that stores item
        //The new node should point to the old top
        Node<Object> newNode(item, top);
        //The new node should become the new top
        top = &newNode;
    }

    //remove a Node from the Stack

    // print the contents of the Stack
    void print() const {
        cout <<"Top of Stack: "  << endl;
        Node<Object>* curr = top;
        while (curr != nullptr) {
            cout << curr->getItem() <<endl;
            curr = curr->getNext();
        }
        cout << "Bottom of Stack: " << endl;
    }

};

#endif //LINKED_LIST_STACK_H