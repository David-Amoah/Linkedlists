//Copyright 2023
// Author: David Amoah

#ifndef LINKEDLISTEXAM_LINKEDLIST_H
#define LINKEDLISTEXAM_LINKEDLIST_H

#include "Node.h"

class LinkedList {
public:
    LinkedList();               //linked list constructor

    ~LinkedList();

    void SetHead(Node* head);

    Node* GetHead() const;

    void SetTail(Node* tail);

    Node* GetTail() const;

    void PrintList() const;     //prints out linkedlist

    void Insert(int pos, Node* nodeLoc);  // inserts a node at position

    void push_front(Node* nodeLoc);     // adds a node to the beginning of the list

    void push_back(Node* nodeLoc);      // adds a node at the end of the list




    //constructor
    //copy assignment operator
    //destructor
    // comparison operator overloading

private:
    Node* head;

    Node* tail;

};


#endif //LINKEDLISTEXAM_LINKEDLIST_H
