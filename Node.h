//
// Created by Alexa Stevens on 9/8/25.
//

#ifndef LINKED_LIST_NODE_H
#define LINKED_LIST_NODE_H


template<typename Object>
class Node {
    private:
        Object item;
        //store the memory address (pointer) of where the next node is
        Node* next;

    public:


         Node(Object newItem) {
            item = newItem;
            next = nullptr;
        }

         Node(Object newItem, Node* nextNode) {
            item = newItem;
            next = nextNode;
        }

        void setItem(Object newItem) {
            item = newItem;
        } // end setItem


        Object getItem() {
            return item;
        }


         void setNext(Node* nextNode) {
            next = nextNode;
        }


         Node* getNext() {
            return next;
        }
};


#endif //LINKED_LIST_NODE_H