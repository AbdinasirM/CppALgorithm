#include <iostream>
#include "SinglyLinked.h"
using namespace std;
int main() {
    SinglyLinked<int> Mylist;

    // Adding the first node to the singly linked list at the beginning
    cout << "Adding the first node to the singly linked list at the beginning" << endl;
    Mylist.insertFront(3);
    Mylist.displayList();
    cout << endl;

    // Adding the second node at the beginning
    cout << "Adding the second node at the beginning:" << endl;
    Mylist.insertFront(2);
    Mylist.displayList();
    cout << endl;

    // Adding the third node at the beginning
    cout << "Adding the third node at the beginning:" << endl;
    Mylist.insertFront(1);
    Mylist.displayList();
    cout << endl;

    // Adding the fourth node between the head and tail of the singly linked list
    cout << "Adding the fourth node between the head and tail of the singly linked list:" << endl;
    Mylist.insertAtThisPositionBetweenHeadAndTail(56, 1);
    Mylist.displayList();
    cout << endl;

    // Adding the fifth node at the end (tail) of the singly linked list
    cout << "Adding the fifth node at the end (tail) of the singly linked list:" << endl;
    Mylist.insertEnd(99);
    cout << endl;

    // Displaying the full list
    cout << "Full List" << endl;
    Mylist.displayList(); // This will print: 1 2 3 56
    cout << endl;

    // Removing the first node
    cout << "Removed the first node" << endl;
    Mylist.removeAtThebegining();
    Mylist.displayList();
    cout << endl;

    // Removing the second node
    cout << "Removed the second node" << endl;
    Mylist.removeAtThisPositionBetweenHeadAndTail(2);
    Mylist.displayList();
    cout << endl;

    // Removing the last node
    cout << "Removed the last node" << endl;
    Mylist.removeEnd();
    Mylist.displayList();
    cout << endl;

    // Removing the last node again
    cout << "Removed the last node" << endl;
    Mylist.removeEnd();
    Mylist.displayList();
    cout << endl;

    // Removing the last node again
    cout << "Removed the last node" << endl;
    Mylist.removeEnd();
    Mylist.displayList();




    return 0;
}
