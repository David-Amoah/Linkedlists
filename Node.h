//Copyright 2023
// Author: David Amoah

#ifndef LINKEDLISTEXAM_NODE_H
#define LINKEDLISTEXAM_NODE_H


class Node {
public:
    Node();

    ~Node();

    void InsertAfter(Node* nodeLoc);

    void SetNext(Node* nodeLoc);

    Node* GetNext();

    void PrintNodeData() const;

private:
    int dataVal;

    Node* nextNodePtr;

};


#endif //LINKEDLISTEXAM_NODE_H
