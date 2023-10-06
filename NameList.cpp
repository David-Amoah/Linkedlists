//Copyright 2023
// Author: David Amoah

#include "NameList.h"
#include "NameNode.h"

#include <iostream>
using std::cout;
using std::endl;

NameList::NameList() {
    head = nullptr;
    tail = nullptr;
}

void NameList::push_front(NameNode *node) {
    if (head == nullptr) {
        head = node;
        tail = node;
    } else {
        node->SetNext(head);
        head = node;
    }

}

void NameList::push_back(NameNode *node) {
    if (head == nullptr) {
        push_front(node);
    } else {
        tail ->SetNext(node);
        tail = node;

    }

}

NameNode *NameList::getHead() const {
    return this -> head;
}

NameNode *NameList::getTail() const {
    return this -> tail;
}

void NameList::print() {
    NameNode* temp = head;
    while(temp != nullptr) {
        temp->printdata();
        temp = temp -> getNext();
    }
}

NameList &NameList::operator=(const NameList &origList) {
    if (this != &origList) {
        head = nullptr;
        tail = nullptr;
        NameNode* temp = origList.head;
        while (temp != nullptr) {
            string newName = temp->getName();
            int newAge = temp -> getAge();
            NameNode* node = new NameNode(newName,newAge);
            push_back(node);
            temp = temp->getNext();
        }
    }

    return *this;
}

NameList::NameList(const NameList &origList) {
    head = nullptr;
    tail = nullptr;
    NameNode* temp = origList.head;
    while (temp != nullptr) {
        string newName = temp->getName();
        int newAge = temp -> getAge();
        NameNode* node = new NameNode(newName,newAge);
        push_back(node);
        temp = temp->getNext();
    }
}

NameList::~NameList() {
    NameNode *tmp = head;
    while (tmp != nullptr) {
        NameNode* prev = tmp;
        tmp = tmp->getNext();
        cout << "delete " << endl;
        prev -> printdata();
       delete prev;
   }
}



