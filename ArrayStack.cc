//
// Created by binbin on 18-8-19.
//

#include "ArrayStack.h"
#include "iostream"

using namespace std;

ArrayStack::ArrayStack() {

    initStack();
}

ArrayStack::~ArrayStack() {

}

bool ArrayStack::initStack() {

     top_index = -1;
}

bool ArrayStack::deleteStack() {

    while(!empty())
    {
        pop();
    }
}

bool ArrayStack::empty() {

    if(top_index != -1)
    {
        return false;
    }

    return true;
}

bool ArrayStack::full() {

    if(top_index == STACK_SIZE-1)
    {
        return true;
    }

    return false;
}

bool ArrayStack::push(float value) {

    if(full())
    {
        std::cout<<" ArrayStack is full !"<<std::endl;
        return false;
    }

    top_index++;

    data[top_index]=value;

    return true;

}

float ArrayStack::pop() {

    if(empty())
    {
        std::cout<<" ArrayStack is empty, can't do pop op !"<<std::endl;
        return -1;
    }

    top_index--;

    return data[top_index];
}

float ArrayStack::getTop() {

    if(empty())
    {
        std::cout<<" ArrayStack is empty, no element to get !"<<std::endl;
        return false;
    }

    return data[top_index];
}

void ArrayStack::showStack() {

    if(empty())
    {
        std::cout<<" ArrayStack is empty, no element to show!"<<std::endl;
        return ;
    }

    for(int k =top_index; k >= 0; k--)
    {
        std::cout<<data[k]<<std::endl;
    }
}