//
// Created by binbin on 18-8-20.
//

#include <iostream>
#include "BinaryTree.h"
#include "stdio.h"

//随机生成1~100之间的数
static int GetRandom()
{
    int nResult = (int)(rand()%100);
    return nResult;

}

BinaryTree::BinaryTree() {
    Create(root);

}

BinaryTree::BinaryTree(BiTreeNode *root) {

}

BinaryTree::~BinaryTree() {

}

int g_i = 0;
BiTreeNode* BinaryTree::Create(BiTreeNode *&root) {

    char ch;
    std::cin>>ch;
    if(ch == '#'){
        root = NULL;
    } else{

      root = new BiTreeNode();
      if(root == NULL)
          return NULL;

      root->data = GetRandom() ;
      Create(root->left_child);
      Create(root->right_child);

    }

    return root;
}

void BinaryTree::Release(BiTreeNode *root) {

}

void BinaryTree::PreOderVist(BiTreeNode *root) {
     if(root != nullptr)
     {
         std::cout<<root->data<<std::endl;
         PreOderVist(root->left_child);
         PreOderVist(root->right_child);
     }
}

void BinaryTree::PostOderVist(BiTreeNode *root) {
    if(root != nullptr)
    {
        PreOderVist(root->left_child);
        PreOderVist(root->right_child);
        std::cout<<root->data<<std::endl;
    }
}

void BinaryTree::MiddleOderVist(BiTreeNode *root) {

    if(root != nullptr)
    {
        PreOderVist(root->left_child);
        std::cout<<root->data<<std::endl;
        PreOderVist(root->right_child);

    }
}

void BinaryTree::LevelOderVist(BiTreeNode *root) {

}

void BinaryTree::Show() {
    PreOderVist(root);
}