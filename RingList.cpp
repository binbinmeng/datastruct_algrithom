//
// Created by binbinm on 8/21/2018.
//

#include "RingList.h"
#include "iostream"
using namespace std;

RingList::RingList(int array[], int size) {
    head = new Node();
    head->next = nullptr;
    head->data = 9999;
    _size = size;
    Node * tail =head;
    for(int k=0; k<size ;++k)
    {
        Node * p = new Node();

        if(p != NULL)
        {
            p->data = array[k];
            p->next = NULL;
            tail->next = p;
            tail = tail->next;
        }
    }
    tail->next = head->next;
}

RingList::~RingList() {

}

void RingList::DeleteSkipElement(int skip_M) {
    if(head == nullptr)
        return;
    int step = 0;
    Node * p = head;
    while( p->next != nullptr && _size>=skip_M)
    {
        if((step) == skip_M-1) {
            std::cout << p->next->data << std::endl;

            Node * s =  p->next;

            p->next = p->next->next;

            delete s;
            step = 0;
            _size--;
        }
        p = p->next;
        step++;
    }
}

void RingList::Show() {

    if(head == nullptr)
        return;

    Node * p = head;

    int count = 0;
    while(p->next != nullptr && (count++) <= 1 * _size)//print 1 cycles
    {
        std::cout<<p->data<<"-->";
        p=p->next;
    }

    std::cout<<"NULL"<<std::endl;
}