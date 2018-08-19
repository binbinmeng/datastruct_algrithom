//
// Created by binbin on 18-8-19.
//

#ifndef DATA_STRUCT_ALGRITHOM_LISTSTACK_H
#define DATA_STRUCT_ALGRITHOM_LISTSTACK_H

struct Node{

    float data;

    Node * next;
};

class ListStack {

public:
    ListStack();

    ~ListStack();

    bool initStack();
    bool deleteStack();

    bool push(float value);
    float pop();

    float getTop();

    bool empty();

    //bool full(); //list stack don't need to judge full or not !

    void showStack();

private:
    Node *top;

};


#endif //DATA_STRUCT_ALGRITHOM_LISTSTACK_H
