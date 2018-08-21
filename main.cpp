#include <iostream>
#include "ArrayStack.h"
#include "ListStack.h"
#include "SingleDirectionList.h"
#include "BinaryTree.h"
#include "string"
#include "RingList.h"
#include "vector"

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

bool palindrome_alg1(std::string in_string){
     /*
      * Judge a string if is a palindrome or not
      *
      */
     int start =0;
     int end =in_string.length()-1;
     while(start <= end)
     {
         if(in_string[start]==in_string[end]){
             end--;
             start++;
         } else{

             return false;
         }
     }

    return true;
}
void redix_convert(std::string in_string, int src_redix, int dst_redix)
{
     /*
      * given a decimal number, convert it to any redix number
      */
     ArrayStack *arrayStack =new ArrayStack();

     long data = atoi(in_string.c_str());

     while(data/dst_redix > 0)
     {
         arrayStack->push(data%dst_redix);
         data = data/dst_redix;
     }
     arrayStack->push(data%dst_redix);

     arrayStack->showStack();

     delete arrayStack;
}

int gcd(int a, int b)
{
    /*
     *Caculate greatest common divisor of a,b
     *
     */

     /* if(b == 0)
          return a;
       gcd(b,a%b);
     *
     */

   while(b !=0 )
   {
       int temp;

       temp = a;
       a = b;
       b = temp%b;
   }

   return a;
}

int test_single_direction_list()
{
    int data[7] ={1,2,2,3,4,5,6};

    SingleDirectionList * list = new SingleDirectionList(data,7);

    list->Show();

    std::cout<<list->Length()<<std::endl;

    //list->Delete(6);

    //list->Show();

    //std::cout<<list->Length()<<std::endl;

    //list->Insert(3,8);

    //list->Show();

    //std::cout<<list->Length()<<std::endl;

    SingleDirectionList * reverselist = new SingleDirectionList(list->Reverse(list->HeadNode()));

    reverselist->Show();

    std::cout<<reverselist->Length()<<std::endl;

    //list->Insert(9);

    //list->Show();

    //std::cout<<list->Length()<<std::endl;

    //list->Delete_Duplication();

    //list->Insert(9);
    //std::cout<<list->FindMiddleNode(list->HeadNode())->data<<std::endl;
    //list->ReverseShow(list->HeadNode());

    list->Show();

    std::cout<<list->Length()<<std::endl;
}

void  test_binary_tree()
{
    BinaryTree * tree = new BinaryTree();

    printf("-----previst-----\n");
    tree->PreOderVist(tree->GetRoot());
    printf("-----postvist-----\n");
    tree->PostOderVist(tree->GetRoot());
    printf("-----middlevist-----\n");
    tree->MiddleOderVist(tree->GetRoot());
}

void test_ringlist()
{
     int array[15] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
     RingList * ringlist = new RingList(array, 15);
     ringlist->Show();

     ringlist->DeleteSkipElement(4);
     //ringlist->Show();

}

int main()
{
    //stack_test();

    //list_stack_test();

    //std::cout<<palindrome_alg1("hellolleh")<<std::endl;

    //redix_convert("1099",10,16);

    //std::cout<<gcd(30,21)<<std::endl;

    //test_single_direction_list();

    //test_binary_tree();
    test_ringlist();

    std::cout << "Hello, World!" << std::endl;

}