#include <iostream>
#include "ArrayStack.h"
#include "ListStack.h"

int stack_test() {

    ArrayStack * stack = new ArrayStack();

    stack->pop();
    stack->showStack();

    stack->push(5);

    stack->push(3);

    stack->push(2);

    stack->push(6);

    std::cout<<"top : "<<stack->getTop()<<std::endl;

    stack->push(9);
    stack->showStack();

    stack->deleteStack();
    stack->showStack();

    delete stack;
    return 0;
}

int list_stack_test()
{
    ListStack * liststack = new ListStack();

    liststack->pop();

    liststack->push(5);

    liststack->push(3);

    liststack->push(2);

    liststack->push(6);

    //liststack->showStack();

    liststack->pop();
    //liststack->showStack();

    liststack->deleteStack();
    liststack->showStack();

    delete liststack;

    return 0;
}

int main()
{
    stack_test();

    list_stack_test();

    std::cout << "Hello, World!" << std::endl;

}