//Copyright 2023
// Author: David Amoah

#ifndef LINKEDLISTEXAM_NAMENODE_H
#define LINKEDLISTEXAM_NAMENODE_H

#include <string>

using std::string;


class NameNode {
public:
    NameNode();     // default constructor
    NameNode(string name, int age);
    void printdata() const;
    NameNode* getNext();
    void SetNext(NameNode* node);
    void SetAge(int age);
    int getAge() const;
    void setName(string name);
    string getName() const;





private:
    string name;
    int age;
    NameNode* next;

};


#endif //LINKEDLISTEXAM_NAMENODE_H
