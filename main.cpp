#include "Node.h"
#include <iostream>

using namespace std;

int main() {
    Node <int> intNode(19);
    Node<int> intNode2(64, &intNode);
    cout << intNode.getItem() <<endl;
    return 0;
}
