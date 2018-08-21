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

      SingleDirectionList(Node * node);

      ~SingleDirectionList();

      void Insert(int i, int value);

      void Insert(int value);

      void Delete(int i);

      int Length();

      Node * Get(int i);

      Node * Locate(Node * node);

      Node * HeadNode(){ return  head;}

      void Show();

public:

      Node* Reverse( Node* phead);

      void Delete_Duplication();

      void Insert(Node* pos, int x);

      Node* FindMiddleNode(Node* phead);

      Node* SortList(Node* phead);

      void ReverseShow(Node* head);

private:

      Node * head;
};


#endif //DATA_STRUCT_ALGRITHOM_SINGLEDIRECTIONLIST_H
