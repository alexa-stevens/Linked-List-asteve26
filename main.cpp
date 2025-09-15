#include "Node.h"
#include "Stack.h"
#include <iostream>

using namespace std;

int main() {
    Node <int> intNode(19);
    Node<int> intNode2(64, &intNode);
    cout << intNode.getItem() <<endl;

    Stack<int> stack1;
    stack1.push(7);
    stack1.push(2);
    stack1.push(32);
    stack1.push(14);
    stack1.print();


    return 0;

}
