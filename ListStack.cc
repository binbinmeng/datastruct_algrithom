//
// Created by binbin on 18-8-19.
//

#include "ListStack.h"
#include "iostream"
using namespace std;

ListStack::ListStack() {
    initStack();
}

ListStack::~ListStack() {

}

bool ListStack::initStack() {

     top= nullptr;
}

bool ListStack::deleteStack() {

    while(top)
    {
        pop();
    }
}

float ListStack::getTop() {

    return top->data;
}

float ListStack::pop() {

    if(empty())
    {
        std::cout<<" stack is empty, can't do pop op !"<<std::endl;
        return -1;
    }

    float data = top->data;

    Node *p = top;

    top = top->next;

    delete p;

    return data;
}

bool ListStack::push(float value) {
    Node *s =new Node();

    s->data = value;

    s->next= top;

    top =s;
}

bool ListStack::empty() {
     if(top == nullptr)
     {
         return true;
     }

    return false;
}

void ListStack::showStack() {

    while(top)
    {
        std::cout<<top->data<<std::endl;

        top =top->next;

    }
}