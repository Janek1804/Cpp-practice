#include <iostream>
#include "linked.h"
template <class T> SinglyLinkedList<T>::SinglyLinkedList(T val){
    value = new T;
    *value = val;
    next = nullptr;
}
template <class T> SinglyLinkedList<T>::~SinglyLinkedList(){
    delete value;
}
template <class T> void SinglyLinkedList<T>::insert(T val){
    if (this->next == NULL){
        this->next = new SinglyLinkedList(val);
    }
    else{
        this->next->insert(val);
    }
}
template <class T> T SinglyLinkedList<T>::getvalue(){
    return *this->value;
}
template <class T> void SinglyLinkedList<T>::print(){
    std::cout<<*this->value;
    if (this->next != NULL){
        this->next->print();
    }
}
int main(){
    SinglyLinkedList aaaaaaaaaa = SinglyLinkedList(2);
    aaaaaaaaaa.insert(3);
    aaaaaaaaaa.print();
}