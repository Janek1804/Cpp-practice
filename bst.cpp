#include <iostream>
#include "bst.h"

BST::BST(double key){
    value = new double;
    *value = key;
    left = nullptr;
    right = nullptr;
}
BST::~BST(){
    delete value;
}
void BST::insert(double key){
    if (key > *this->value){
        if (this->right == NULL){
            *this->right = BST(key);
        }
        this->right->insert(key);
    }
    if (key < *this->value){
        if (this->left == NULL){
            *this->left = BST(key);
        }
        this->left->insert(key);
    }
}
double BST::getvalue(){
    return *this->value;
}
void BST::show(){
    std::cout<<*this->value<<std::endl;
    if (this->left != NULL){
        this->left->show();
    if (this->)
    }
}

int main(){
    BST aaaaaaaa = BST(1.5);
    aaaaaaaa.insert(1.2);
    std::cout<<aaaaaaaa.getvalue();
}