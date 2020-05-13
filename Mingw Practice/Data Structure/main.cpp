#include <cstdlib>
#include <iostream>
#include <time.h>
#include <cstddef>
#include "Node.h"

//#include "DataStructures.h"
class Node2
{
    public:
    int val;
    Node2* next;
};

int main(int argc, char** argv)
{
    Node* tail;
    Node* head = new Node();
    
    srand(time(NULL));

    head->setValue(0);
    tail = head;
    for (int i = 1; i<10; i++)
    {
        Node *newNode = new Node;
        newNode->setValue(i);
        newNode->setNext(NULL);
        tail->setNext(newNode);
        tail = newNode;
    }
    
    Node* tmpNode = head;
    while(tmpNode)
    {
        std::cout<< tmpNode->getValue()<<std::endl;
        tmpNode = tmpNode->getNext();
    }

    Node2* head2 = new Node2();
    Node2* tail2;
    head2->val = 0;
    tail = head;

    for (int i = 1; i<10; i++)
    {
        Node2 *newNode;
        newNode->val = i*2;
        newNode->next = NULL;
        tail2->next = newNode;
        tail2 = newNode;
    }

    Node2* tmpNode2 = head2;
    while( tmpNode2)
    {
        std::cout<< tmpNode2->val <<std::endl;
        tmpNode2 = tmpNode2->next;
    }

    return 0;
}