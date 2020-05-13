#include "Node.h"
#include <cstddef>

Node::Node()
{
    next = NULL;
}

Node::Node(const Node& oldNode)
{
    next = oldNode.next;
    value = oldNode.value;
}

Node::~Node()
{

}

bool Node::hasNext()
{
    return next? true:false;
}

Node* Node::getNext()
{
    return next;
}

void Node::setNext(Node* newNext)
{
    if( !newNext )
    {
        next = NULL;
    }
    else
    {
        next = newNext;
    }
}

int Node::getValue()
{
    return value;
}

void Node::setValue(int val)
{
    value = val;
}