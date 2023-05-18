#include <iostream>
#include "bst.h"

template <class T> BST<T>::BST(T key){
    value = new T;
    *value = key;
    left = nullptr;
    right = nullptr;
}
template <class T> BST<T>::~BST(){
    delete value;
}
template <class T> void BST<T>::insert(T key){
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
template <class T> bool BST<T>::search(T key){
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
template <class T> T BST<T>::getvalue(){
    return *this->value;
}
template <class T> T BST<T>::minimum(){
    if (this->left == NULL){
        return *this->value;
    }
    else{
        return this->left->minimum();
    }
}
template <class T> T BST<T>::maximum(){
    if (this->right == NULL){
        return *this->value;
    }
    else{
        return this->right->maximum();
    }
}
template <class T> void BST<T>::show(){
    std::cout<<*this->value<<std::endl;
    if (this->left != NULL){
        this->left->show();
    }
    if (this->right != NULL){
        this->right->show();
    }
}

int main(){
    BST tree = BST(1.5);
    tree.insert(1.2);
    tree.show();
    std::cout<<tree.search(1.2)<<"\n";
    std::cout<<tree.search(1.9)<<"\t"<<tree.minimum()<<"\t"<<tree.maximum();
    return 0;
}