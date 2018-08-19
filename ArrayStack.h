//
// Created by binbin on 18-8-19.
//

#ifndef DATA_STRUCT_ALGRITHOM_ArrayStack_H
#define DATA_STRUCT_ALGRITHOM_ArrayStack_H

const int STACK_SIZE = 4;

class ArrayStack {
public:

    ArrayStack();
    ~ArrayStack();

    bool initStack();
    bool deleteStack();

    bool push(float value);
    float pop();

    float getTop();

    bool empty();

    bool full();

    void showStack();

private:

    float data[STACK_SIZE];

    int top_index;

};


#endif //DATA_STRUCT_ALGRITHOM_ArrayStack_H
