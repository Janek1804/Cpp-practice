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
            this->right = new BST(key);
        }
        this->right->insert(key);
    }
    if (key < *this->value){
        if (this->left == NULL){
            this->left = new BST(key);
        }
        this->left->insert(key);
    }
}
bool BST::search(double key){
    if (key == *this->value){
        return true;
    }
    else if (key > *this->value && this->right != NULL){
        this->right->search(key);
    }
    else if (this->left != NULL){
        this->left->search(key);
    }
    else{
    return false;
    }
}
double BST::getvalue(){
    return *this->value;
}
double BST::minimum(){
    if (this->left == NULL){
        return *this->value;
    }
    else{
        return this->left->minimum();
    }
}
double BST::maximum(){
    if (this->right == NULL){
        return *this->value;
    }
    else{
        return this->right->maximum();
    }
}
void BST::show(){
    std::cout<<*this->value<<std::endl;
    if (this->left != NULL){
        this->left->show();
    }
    if (this->right != NULL){
        this->right->show();
    }
}

int main(){
    std::cout<<"aaaaaaaa";
    BST aaaaaaaa = BST(1.5);
    aaaaaaaa.insert(1.2);
    std::cout<<"aaaaaaaaaaaaaa\n";
    aaaaaaaa.show();
    std::cout<<aaaaaaaa.search(1.2)<<"\n";
    std::cout<<aaaaaaaa.search(1.9)<<"\t"<<aaaaaaaa.minimum()<<"\t"<<aaaaaaaa.maximum();
    return 0;
}