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
template <class T> void SinglyLinkedList<T>::insert(T val,int index){
    if (this->next == NULL | index == 0){
        this->next = new SinglyLinkedList(val);
    }
    else{
        index--;
        this->next->insert(val,index);
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
    else{
        std::cout<<"\n";
    }
    
}
template <class T> bool SinglyLinkedList<T>::search(T val){
    if (*this->value == val){
        return true;
    }
    else if(this->next != NULL){
        this->next->search(val);
    }
    else{
        return false;
    }
    
}
int main(){
    SinglyLinkedList aaaaaaaaaa = SinglyLinkedList(2);
    aaaaaaaaaa.insert(3,5);
    aaaaaaaaaa.print();
    std::cout<<aaaaaaaaaa.search(3)<<'\t'<<aaaaaaaaaa.search(69);
}