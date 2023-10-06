//Copyright 2023
// Author: David Amoah

#ifndef LINKEDLISTEXAM_NAMELIST_H
#define LINKEDLISTEXAM_NAMELIST_H

#include "NameNode.h"

class NameList {
public:
    NameList();               //linked list constructor
    NameList(const NameList& origList);  //copy constructor

    NameList& operator=(const NameList &origList);

    void push_front(NameNode* node);     // adds a node to the beginning of the list
    void push_back(NameNode* node);      // adds a node at the end of the list

    void print();     //prints out linkedlist
    virtual ~NameList();
    NameNode* getHead() const;
    NameNode* getTail() const;


private:
    NameNode* head;
    NameNode* tail;

};


#endif //LINKEDLISTEXAM_NAMELIST_H
