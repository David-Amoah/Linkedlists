//Copyright 2023
// Author: David Amoah

#include "NameNode.h"
#include <iostream>

using std::cout;
using std::endl;


NameNode::NameNode() {
    this -> name = "";
    this -> age = 0;
    next = nullptr;
}

NameNode::NameNode(string name, int age) {
    this -> name = name;
    this -> age = age;
    this -> next = nullptr;
}

void NameNode::printdata() const {
    cout << this-> name << endl;
    cout << this -> age << endl;
}

NameNode* NameNode::getNext() {
    return this -> next;
}

void NameNode::SetNext(NameNode* node) {
    this -> next = node;
}

void NameNode::SetAge(int age) {
    this -> age  = age;
}

int NameNode::getAge() const {
    return this -> age;
}

void NameNode::setName(string name) {
    this -> name = name;
}

string NameNode::getName() const {
    return this-> name;
}




