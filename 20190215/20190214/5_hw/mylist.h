#ifndef MYLIST_H
#define MYLIST_H

#include <iostream>
using namespace std;

class Node
{
public:
    Node();
    Node(int data);
    int data();
    Node *next();
    void setNext(Node *node);
    ~Node();

private:
    int m_data;
    Node *m_pNext;
};

class MyList
{
public:
    MyList();
    void insert(int data);
    void display();
    Node *search(int data);
    void del(int data);
    ~MyList();

private:
    Node *m_pFirstNode;
    int m_iLen;
};

#endif // MYLIST_H
