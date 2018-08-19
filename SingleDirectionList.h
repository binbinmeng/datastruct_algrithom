//
// Created by binbin on 18-8-19.
//

#ifndef DATA_STRUCT_ALGRITHOM_SINGLEDIRECTIONLIST_H
#define DATA_STRUCT_ALGRITHOM_SINGLEDIRECTIONLIST_H

#include "ListStack.h"
//struct Node
//{
//    int data;
//
//    Node* next = nullptr;
//};

class SingleDirectionList {
public:
      SingleDirectionList();

      SingleDirectionList(int array[], int size);

      ~SingleDirectionList();

      void Insert(int i, Node * node);

      void Delete(int i);

      int Length();

      void Show();

public:

      void Reverse();

private:

      Node * head;
};


#endif //DATA_STRUCT_ALGRITHOM_SINGLEDIRECTIONLIST_H
