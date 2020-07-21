

#ifndef UNTITLED_TREE_H
#define UNTITLED_TREE_H
#include "TreeNode.h"

class Tree{
    TreeNode *root;
public:
    Tree(): root(nullptr){}
    TreeNode *add_root(int volume);
    ~Tree(){delete root;}
};

TreeNode *Tree::add_root(int volume) {
    if (root){
        exit(-1);
    }
    root = new TreeNode (volume);
    return root;
}




#endif //UNTITLED_TREE_H
