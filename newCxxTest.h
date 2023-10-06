// Copyright 2023
// Author: David Amoah

#ifndef NEWCXXTEST_H
#define NEWCXXTEST_H

#include "NameList.h"
#include "NameNode.h"

#include <cxxtest/TestSuite.h>

class newCxxTest : public CxxTest::TestSuite {
public:


    void testMyNameNodeFucntion() {   ///test for the NameNode class

        //test for default constructor;
        NameNode* node1 = new NameNode();
        TS_ASSERT_EQUALS(node1->getName(), "");
        TS_ASSERT_EQUALS(node1->getAge(), 0);

        //test for parametrized constructor;
        NameNode* node2 = new NameNode("David Amoah", 19);
        TS_ASSERT_EQUALS(node2->getName(), "David Amoah");
        TS_ASSERT_EQUALS(node2->getAge(), 19);

        //test for print function
        node2 -> printdata();

        //test for setName and getName
        node2 ->setName("Hao Loi");
        TS_ASSERT_EQUALS(node2->getName(), "Hao Loi");

        //test for setAge and getAge
        node1 ->SetAge(48);
        TS_ASSERT_EQUALS(node1->getAge(), 48);


        //test for setNext and getNext
        NameNode* node3 = new NameNode("Michael Jackson", 32);

        node2 ->SetNext(node3);
        TS_ASSERT_EQUALS(node2->getNext(), node3);


    }

    void testMyNameListFunction() { // test for the NameList Class

        //test for Name List constructor
        NameList ContactNames;
        TS_ASSERT_EQUALS(ContactNames.getHead(), nullptr);
        TS_ASSERT_EQUALS(ContactNames.getTail(), nullptr);

        //test for Name List push_front
        NameNode* node1 = new NameNode("Jessica", 37);
        NameNode* node2 = new NameNode("Kayla", 44);
        NameNode* node3 = new NameNode("Glenn", 30);

        ContactNames.push_front(node1);
        ContactNames.push_front(node2);
        ContactNames.push_front(node3);

        TS_ASSERT_EQUALS(ContactNames.getHead(), node3);
        TS_ASSERT_EQUALS(ContactNames.getTail(), node1);

        ContactNames.print();

        //test for Name List push_back
        NameList players;
        NameNode* node4 = new NameNode("Lynn", 31);
        NameNode* node5 = new NameNode("Vanessa", 22);
        NameNode* node6 = new NameNode("Gloria", 10);

        players.push_back(node4);
        players.push_back(node5);
        players.push_back(node6);

        TS_ASSERT_EQUALS(players.getHead(), node4);
        TS_ASSERT_EQUALS(players.getTail(), node6);

        players.print();


        //test for Names List copy constructor
//        NameList phoneBook;
//        NameNode* contact1 = new NameNode("Henry",21);
//
//        phoneBook.push_front(contact1);

        //test for Names List oprator;
//        NameList products;
//        NameList food;
//
//
//        food=(products);
//
//        TS_ASSERT_EQUALS(food,products);








    }
};
#endif /* NEWCXXTEST_H */
