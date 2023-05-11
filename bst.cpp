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
        *this->right->insert(key);
    }
}
double BST::getvalue(){
    return *this->value;
}

int main(){
    BST aaaaaaaa = BST(1.5);
    aaaaaaaa.insert(1.2);
    std::cout<<aaaaaaaa.getvalue();
}