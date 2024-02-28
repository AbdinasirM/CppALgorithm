#ifndef SINGLYLINKED_H
#define SINGLYLINKED_H

#include "Node.h"

// Declaration of the SinglyLinked class template
template <class ItemType>
class SinglyLinked {
private:
    Node<ItemType>* headPtr;  // Pointer to the head of the linked list
    Node<ItemType>* tailPtr;  // Pointer to the tail of the linked list

public:
    // Constructor: initializes headPtr and tailPtr to NULL
    SinglyLinked();

    // Destructor: frees memory by calling clear() function
    ~SinglyLinked();

    // Insert a new node with the given value at the front of the list
    void insertFront(ItemType val);

    // Insert a new node with the given value at the end of the list
    void insertEnd(ItemType val);

    // Insert a new node with the given value at a specific position
    // between the head and tail of the list
    void insertAtThisPositionBetweenHeadAndTail(ItemType val, int position);

    // Remove the node at the beginning of the list
    void removeAtThebegining();

    // Remove the node at the end of the list
    void removeEnd();

    // Remove the node at a specific position between the head and tail
    void removeAtThisPositionBetweenHeadAndTail(int position);

    // Clear the entire linked list by deallocating all nodes
    void clear();

    // Display the values of all nodes in the linked list
    void displayList();

};

// Include the implementation of the SinglyLinked class template
#include "SinglyLinked.cpp"

#endif // SINGLYLINKED_H
