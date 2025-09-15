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

    //Destructor
    ~Stack() {
        //Remove any remaining Nodes from heap memory
        while (top != nullptr) {
            pop();
        }
        cout << "No memory leaks!" <<endl;
    }

    // add a Node to the Stack
    void push(Object item) {
        // Create a new node that stores item
        // The new node should point to the old top
        // Allocate the new node in head memory
        Node<Object>* newNodePtr = new Node<Object>(item, top);

        //The new node should become the new top
        top = newNodePtr;
    }

    //remove a Node from the Stack
    Object pop() {
        // Handle the case of an empty stack
        if (top==nullptr) {
            return Object();
        }
        Object item = top->getItem();
        Node<Object>* topCopy = top;
        // Update top
        top = top->getNext();
        // Use the delete keyword to deallocate heap memory
        delete topCopy;
        topCopy = nullptr;
        // Return the Object that is being popped
        return item;
    }

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