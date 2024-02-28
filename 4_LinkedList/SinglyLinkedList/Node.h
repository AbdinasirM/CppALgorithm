#ifndef NODE_H
#define NODE_H

#include <cstddef>

template <class ItemType>
class Node {
private:
    ItemType value;        // Data stored in the node
    Node<ItemType>* next;  // Pointer to the next node in the linked list

public:
    // Default constructor initializes next pointer to NULL (or 0)
    Node();

    // Parameterized constructor sets value and next pointer
    Node(ItemType val, Node<ItemType>* nxt = NULL);

    // Set the value of the node
    void setValue(ItemType val);

    // Set the next pointer of the node
    void setNext(Node<ItemType>* nxt);

    // Get the value of the node
    ItemType getValue();

    // Get the next pointer of the node
    Node<ItemType>* getNext();
};

#include "Node.cpp"
#endif // NODE_H
