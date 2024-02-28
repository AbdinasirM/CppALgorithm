#include "Node.h"
#include <cstddef>

// Default constructor initializes next pointer to NULL (or 0)
template <class ItemType>
Node<ItemType>::Node() {
    next = NULL; // or NULL
}

// Parameterized constructor sets value and next pointer
template <class ItemType>
Node<ItemType>::Node(ItemType val, Node<ItemType>* nxt) {
    value = val;
    next = nxt;
}

// Set the value of the node
template <class ItemType>
void Node<ItemType>::setValue(ItemType val) {
    value = val;
}

// Set the next pointer of the node
template <class ItemType>
void Node<ItemType>::setNext(Node<ItemType>* nxt) {
    next = nxt;
}

// Get the value of the node
template <class ItemType>
ItemType Node<ItemType>::getValue() {
    return value;
}

// Get the next pointer of the node
template <class ItemType>
Node<ItemType>* Node<ItemType>::getNext() {
    return next;
}
