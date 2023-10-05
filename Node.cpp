//Copyright 2023
// Author: David Amoah

#include "Node.h"
#include <iostream>

using std::cout;
using std::endl;


void Node::SetNext(Node* nodeLoc) {
    this -> nextNodePtr = nodeLoc;
}

Node* Node::GetNext() {
    return this -> nextNodePtr;
}

void Node::PrintNodeData() const {
    cout << dataVal << endl;
}


