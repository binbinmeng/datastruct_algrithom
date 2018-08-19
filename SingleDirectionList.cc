//
// Created by binbin on 18-8-19.
//

#include "SingleDirectionList.h"
#include "iostream"
using namespace std;

SingleDirectionList::SingleDirectionList() {
     head = nullptr;
}

SingleDirectionList::SingleDirectionList(int *array, int size) {
    //head insert method to construct list
    head = new Node();

    head->next = nullptr;

    for(int k=0; k<size; ++k)
    {
        Node *s = new Node();

        s->data = array[k];

        s->next = head->next;

        head->next = s;
    }
}

SingleDirectionList::~SingleDirectionList() {

     if( head!= nullptr && head->next != nullptr)
     {
         for(int k =0; k< Length(); ++k)
         {
             Delete(k);
         }

         delete head;
     }
}

void SingleDirectionList::Insert(int i, Node *node) {
     Node * p = head;

     int index =0;

     while(p != nullptr &&index<i)
     {
         p = p->next;
         index++;
     }

     //at this time, p have reach i-1 position

     node->next = p->next;
     p->next = node;
}

void SingleDirectionList::Delete(int i) {

    if(i>=Length())
        return;

    Node * p = head;

    int index =0;

    while(p != nullptr &&index<i)
    {
        p = p->next;
        index++;
    }

    //at this time, p have reach i-1 position
     Node * temp =p->next;
     p->next = p->next->next;

     delete temp;

}

int SingleDirectionList::Length() {

    if(head->next ==nullptr)
        return 0;

    Node *p=head->next;
    int cout = 0;
    while(p != nullptr)
    {
        p =p->next;
        cout++;
    }

    return cout;
}

void SingleDirectionList::Show() {

    Node *p=head->next;
    while(p != nullptr)
    {
        std::cout<<p->data<<"-->";

        p =p->next;

    }
    std::cout<<"NULL"<<std::endl;
}

void SingleDirectionList::Reverse() {

     if(head == nullptr)
         return ;

     Node * pfirst = head->next;
     Node * pnow = head->next->next;
     Node * pnext = pnow->next;

     pfirst->next = nullptr;

     while(pnext != nullptr)
     {
         pnext = pnow->next;
         pnow->next = pfirst;
         pfirst = pnow;
         pnow = pnext;
     }


     //print reversed list,which pfirst is head pointer
    Node *p=pfirst;
    while(p != nullptr)
    {
        std::cout<<p->data<<"-->";

        p =p->next;

    }
    std::cout<<"NULL"<<std::endl;

}