#include "SinglyLinked.h"
#include <cstddef>
#include <iostream>
using namespace std;

// Constructor: Initializes headPtr and tailPtr to NULL
template <class ItemType>
SinglyLinked<ItemType>::SinglyLinked() {
    headPtr = NULL;
    tailPtr = NULL;
}

// Destructor: Clears the linked list by calling the clear() function
template <class ItemType>
SinglyLinked<ItemType>::~SinglyLinked() {
    // Implement the destructor if needed
    clear();
}

// Inserts a new node with the given value at the front of the list
template <class ItemType>
void SinglyLinked<ItemType>::insertFront(ItemType val) {
    Node<ItemType>* newNode = new Node<ItemType>(val);

    // If the list is empty, set both head and tail to the new node
    if (headPtr == NULL) {
        headPtr = newNode;
        tailPtr = newNode;
    } else {
        // Otherwise, update head and set the new node's next to the old head
        newNode->setNext(headPtr);
        headPtr = newNode;
    }
}

// Inserts a new node with the given value at the end of the list
template <class ItemType>
void SinglyLinked<ItemType>::insertEnd(ItemType val) {
    Node<ItemType>* newNode = new Node<ItemType>(val);

    // If the list is empty, set both head and tail to the new node
    if (headPtr == NULL) {
        headPtr = newNode;
        tailPtr = newNode;
    } else {
        // Otherwise, update tail and set the previous tail's next to the new node
        tailPtr->setNext(newNode);
        tailPtr = newNode;
    }
}

// Inserts a new node with the given value at a specific position between head and tail
template <class ItemType>
void SinglyLinked<ItemType>::insertAtThisPositionBetweenHeadAndTail(ItemType val, int position) {
    Node<ItemType>* newNode = new Node<ItemType>(val);
    Node<ItemType>* currentNode = headPtr;

    // If position is less than or equal to 0, insert at the front
    if (position <= 0) {
        insertFront(val);
        return;
    }

    int currentPosition = 0;

    // Iterate through the list to find the correct position
    while (currentPosition < position - 1 && currentNode != NULL) {
        currentNode = currentNode->getNext();
        currentPosition++;
    }

    // If the position is out of bounds, insert at the end
    if (currentPosition < position - 1 || currentNode == NULL) {
        insertEnd(val);
    } else {
        // Insert the new node at the specified position
        newNode->setNext(currentNode->getNext());
        currentNode->setNext(newNode);
    }
}

// Removes the node at the beginning of the list
template <class ItemType>
void SinglyLinked<ItemType>::removeAtThebegining(){
    Node<ItemType>* currentNode = headPtr;

    // Check if the list is empty
    if(headPtr == NULL){
        return; // List is empty, nothing to remove
    }

    // Update head to the next node and delete the old head
    Node<ItemType>* nextNode = currentNode->getNext();
    currentNode->setNext(NULL);
    delete currentNode;
    headPtr = nextNode;
}

// Removes the node at the end of the list
template <class ItemType>
void SinglyLinked<ItemType>::removeEnd(){
    // Check if the list is empty
    if(headPtr == NULL){
        return; // List is empty, nothing to remove
    }

    // If there is only one node in the list, delete it and set head to NULL
    if(headPtr->getNext()  == NULL){
        delete headPtr;
        headPtr = NULL;
        return;
    }

    // Traverse the list to find the node before the tail
    Node<ItemType>* currentNode = headPtr;
    while(currentNode->getNext()->getNext() != NULL){
        currentNode = currentNode->getNext();
    }

    // Now, 'currentNode' is pointing to the node before the tail
    Node<ItemType>* tailNode = currentNode->getNext();
    currentNode->setNext(NULL);
    delete tailNode;
}

// Removes the node at a specific position between head and tail
template <class ItemType>
void SinglyLinked<ItemType>::removeAtThisPositionBetweenHeadAndTail(int position){
    // Check if the position is invalid or the list is empty
    if(position <= 0 || headPtr == NULL){
        return;
    }

    // Special case: removing the head
    if(position == 1){
        Node<ItemType>* temp = headPtr;
        headPtr = headPtr->getNext();
        delete temp;
        return;
    }

    // Regular case: traverse the list to find the node at the desired position
    Node<ItemType>* currentNode = headPtr;
    int currentPosition = 1;

    while (currentPosition < position - 1 && currentNode->getNext() != NULL) {
        currentNode = currentNode->getNext();
        currentPosition++;
    }

    // Check if position is out of bounds
    if(currentNode->getNext() == NULL || currentPosition != position - 1){
        return;
    }

    // Now, 'currentNode' is pointing to the node before the desired position
    Node<ItemType>* nodeToRemove = currentNode->getNext();
    currentNode->setNext(nodeToRemove->getNext());
    delete nodeToRemove;
}

// Clears the entire linked list by deallocating memory for all nodes
template <class ItemType>
void SinglyLinked<ItemType>::clear(){
    Node<ItemType>* currentNode = headPtr;

    // Iterate through the list and delete each node
    while(currentNode != NULL){
        Node<ItemType>* nextNode = currentNode->getNext();
        currentNode->setNext(NULL);
        delete currentNode;
        currentNode = nextNode;
    }

    // Set head to NULL after clearing the list
    headPtr = NULL;
}

// Displays the values of all nodes in the linked list
template <class ItemType>
void SinglyLinked<ItemType>::displayList(){
    Node<ItemType>* currentNode = headPtr;

    // Iterate through the list and print each node's value
    while(currentNode != NULL){
        cout << "(" << currentNode->getValue() << ")->";
        currentNode = currentNode->getNext();
    }

    cout << endl;

    // Check if the list is empty
    if(headPtr == NULL){
        cout << "The singly linked list is empty" << endl;
    }
}
