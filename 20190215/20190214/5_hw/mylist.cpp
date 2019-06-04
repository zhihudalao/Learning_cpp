#include "mylist.h"

MyList::MyList()
{
    m_pFirstNode = NULL;
    m_iLen = 0;
}

void MyList::insert(int data)
{
    Node *node = new Node(data);
//    node->m_pNext = m_pFirstNode;
    node->setNext(m_pFirstNode);
    m_pFirstNode = node;
    m_iLen++;
}

void MyList::display()
{
    Node *node = m_pFirstNode;
    while (NULL != node)
    {
        cout << node->data() << ' ';
//        node = node->m_pNext;
        node = node->next();
    }
    cout << endl;
}

Node *MyList::search(int data)
{
    Node *node = m_pFirstNode;
    while (NULL != node)
    {
        if (data == node->data())
        {
            break;
        }
        node = node->next();
    }
    return node;
}

void MyList::del(int data)
{
    Node *cur = m_pFirstNode;
    Node *pre = m_pFirstNode;
    while (NULL != cur)
    {
        if (data == cur->data())
        {
            if (cur == m_pFirstNode)
            {
                m_pFirstNode = cur->next();
            }
            else
            {
                pre->setNext(cur->next());
            }

            delete cur;
            cur = NULL;
            break;
        }
        pre = cur;
        cur = cur->next();
    }
}

MyList::~MyList()
{
    Node *node = m_pFirstNode;
    Node *tmp = NULL;
    while (NULL != node)
    {
        tmp = node;
        node = node->next();
        delete tmp;
    }
    cout << "~MyList()..." << endl;
}

Node::Node()
{
    m_data = 0;
    m_pNext = NULL;
}

Node::Node(int data)
{
    m_data = data;
    m_pNext = NULL;
}

int Node::data()
{
    return m_data;
}

Node *Node::next()
{
    return m_pNext;
}

void Node::setNext(Node *node)
{
    m_pNext = node;
}

Node::~Node()
{
    cout << "~Node()...\n";
}
