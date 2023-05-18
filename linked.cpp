#include <iostream>
#include "linked.h"
#include <stdlib.h>
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
    std::cout<<*this->value<<" ";
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
template <class T> T SinglyLinkedList<T>::maximum(){
    T maxval=*this->value;
    SinglyLinkedList<T>* head = this;
    while (head->next != NULL){
        if (*head->next->value > maxval){
            maxval = *head->next->value;
        }
        head=head->next;
    }
    return maxval;
}
template <class T> T SinglyLinkedList<T>::minimum(){
    T minval= *this->value;
    SinglyLinkedList<T>* head = this;
        while (head->next != NULL){
            if (*head->next->value < minval){
                minval = *head->next->value;
            }
            head = head->next;
        }
        return minval;
}
int main(){
    srand(time(0));
    int tab[8];
    for (int i = 0; i<8;i++){
        tab[i] = rand() % 50;
    }
    SinglyLinkedList inst = SinglyLinkedList(2);
    inst.insert(3,5);
    for (int i =0; i<8;i++){
        inst.insert(tab[i],i+1);
    }
    inst.print();
    std::cout<< inst.search(3)<<'\t'<< inst.search(69)<<"\t"<< inst.maximum()<<"\t"<< inst.minimum();
}