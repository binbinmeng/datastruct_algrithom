//
// Created by binbin on 18-8-19.
//

#include "SingleDirectionList.h"
#include "iostream"
using namespace std;

SingleDirectionList::SingleDirectionList() {
    //Don't have head pionter
     head = nullptr;
}

SingleDirectionList::SingleDirectionList(int *array, int size) {
    //Have head pionter
    head = new Node();

    //head insert method to construct list
    head->next = nullptr;

    for(int k=0; k<size; ++k)
    {
        Node *s = new Node();

        s->data = array[k];

        s->next = head->next;

        head->next = s;
    }
}

SingleDirectionList::SingleDirectionList(Node *node) {
    //Have head pionter
    head = new Node();

    head->next = node;

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

void SingleDirectionList::Insert(int i, int value) {
     Node * p = head;

     int index =0;

     while(p != nullptr &&index<i)
     {
         p = p->next;
         index++;
     }

     //at this time, p have reach i-1 position

     Node *s =new Node();
     s->data = value;
     s->next = p->next;
     p->next = s;
}

void SingleDirectionList::Insert(int value) {
    Node* p = new Node();

    if(p!= nullptr)
    {
        p->data = value;
        p->next = nullptr;

        //default, head insert method
        p->next = head->next;
        head->next = p;

    }
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

Node* SingleDirectionList::Get(int i) {
    //Get i-th node element
    Node* p=head->next;

    int j=0;
    while((p != nullptr) &&(j<i))
    {
        p=p->next;
        j++;
    }

    return p;
}

Node* SingleDirectionList::Locate(Node *node) {
    if(node== nullptr)
        return NULL;

   Node * p = head->next;

   while((p!= nullptr)&&(p->data!=node->data))
   {
       p=p->next;

   }

    return p;
}
void SingleDirectionList::Show() {
    if(head== nullptr)
        return;
    //As use head insert method to construct list
    Node *p=head->next;
    while(p != nullptr)
    {
        std::cout<<p->data<<"-->";

        p =p->next;

    }
    std::cout<<"NULL"<<std::endl;
}

void SingleDirectionList::ReverseShow(Node *phead) {
     if(phead == nullptr)
         return;

     Node *p=phead;
     printf("%d\n",p->data);
     ReverseShow(p->next);


}

Node* SingleDirectionList::Reverse( Node* phead) {

     if(phead == nullptr)
         return NULL;

     /*Node * pre = phead->next;

     Node * pnow = phead->next->next;
     Node * pnext = pnow->next;

     pre->next = nullptr;

     while(pnext != nullptr)
     {
         pnext = pnow->next;
         pnow->next = pre;
         pre = pnow;
         pnow = pnext;

     }
    */

    Node * pre = phead->next;

    Node * pnow = phead->next->next;
    Node * pnext = pnow->next;

    pre->next = nullptr;

    while(pnext->next != nullptr)
    {

        pnow->next = pre;
        pre = pnow;
        pnow = pnext;

        pnext = pnow->next;
    }

    pnow->next = pre;
    pnext->next = pnow;
    pre = pnext;
    head->next = pnext;

    return pre;
}

void SingleDirectionList::Delete_Duplication() {

    if(head == nullptr)
        return;

    Node * pre = head;
    Node * pcur = head->next;
    Node * pnext =pcur->next;

    while(pnext->next!= nullptr)
    {
        //pcur = pre;
        //pnext =  pre->next;

        if(pcur->data == pnext->data)
        {
            pcur = pnext;
            pre->next = pcur;
            pnext = pcur->next;
        }
        else{
            pre = pcur;
            pcur = pnext;
            pnext= pnext->next;
        }
    }
}

void SingleDirectionList::Insert(Node *pos, int x) {
     if(pos == nullptr)
         return;

     Node * newnode = new Node();
     if(newnode != NULL)
     {
        newnode->data = pos->data;
        pos->data = x;
        newnode->next = pos->next;
        pos->next = newnode;
     }
}

Node*  SingleDirectionList::FindMiddleNode(Node *phead) {
    if(phead == NULL)
        return NULL;
    Node * fast = phead;
    Node * slow = phead;

    while(fast->next != nullptr)
    {
        slow=slow->next;
        fast=fast->next->next;
    }

    return slow;
}

Node* SingleDirectionList::SortList(Node* phead) {
    if(head == nullptr)
        return NULL;

    Node * middle = phead;
    Node * end = phead;

    while(middle->next!=nullptr && end->next!= nullptr)
    {
       middle=middle->next;
       end=end->next->next;
    }

    end = SortList(middle);

    middle =SortList(phead);

    //return merge(end,middle);

}