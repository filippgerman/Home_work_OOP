

#ifndef UNTITLED_TREENODE_H
#define UNTITLED_TREENODE_H

#include <iostream>
class TreeNode{
    int data;
    TreeNode *left, *right;
public:
    TreeNode(int data): data(data){left = nullptr; right = nullptr;}
    TreeNode() {left = nullptr; right = nullptr; data = 0;}
    friend class Tree;

    void insert(int volume);
    void print_tree() const ;
    TreeNode* find_number(int volume);

    void print_data();
    void clear_tree();

    ~TreeNode();

};


void TreeNode::insert(int volume){
    if (volume > this->data) {
        if (right)
            right->insert(volume);

        else {
            right = new TreeNode(volume);
            std::cout << "создался правый узел" << std::endl;

        }

    }
    else if (volume < this->data) {
        if (left)
            left->insert(volume);

        else {
            left = new TreeNode(volume);
            std::cout << "создался левый узел" << std::endl;
        }
    }
}

void TreeNode::print_tree() const {
    if (this) {
        std::cout << data << std::endl;
        left->print_tree();
        right->print_tree();
    }

}

TreeNode* TreeNode::find_number(int volume) {
    if (volume > this->data) {
        TreeNode *result = right->find_number(volume);
        return result;
    }
    else if (volume < this->data) {
        TreeNode *result = left->find_number(volume);
        return result;
    }

    else if (volume == this->data) {
        std::cout << "число которое искали " << this->data << std::endl;
        return this;
    }
}

void TreeNode::print_data() {
    std::cout << this->data << std::endl;
}

void TreeNode::clear_tree(){
    if (this) {
        left->clear_tree();
        right->clear_tree();

        this->data = 0;
        if (left) {
            delete left;
            this->left = nullptr;
        }
        if (right) {
            delete right;
            this->right = nullptr;
        }
    }

}

TreeNode::~TreeNode() {
    this->clear_tree();
}


#endif