//
// Created by binbin on 18-8-20.
//

#ifndef DATA_STRUCT_ALGRITHOM_BINARYTREE_H
#define DATA_STRUCT_ALGRITHOM_BINARYTREE_H

#include <zconf.h>

struct BiTreeNode{
    int data;
    BiTreeNode * left_child,* right_child;
};

class BinaryTree {
public:
    BinaryTree();
    BinaryTree(BiTreeNode * root);
    ~BinaryTree();

    void  PreOderVist(BiTreeNode * root);
    void  PostOderVist(BiTreeNode * root);
    void  LevelOderVist(BiTreeNode * root);
    void  MiddleOderVist(BiTreeNode * root);

    BiTreeNode* GetRoot(){ return root;}

    void  Show();

private:
    BiTreeNode * root;

    BiTreeNode* Create(BiTreeNode *&root);
    void Release(BiTreeNode * root);
};


#endif //DATA_STRUCT_ALGRITHOM_BINARYTREE_H
