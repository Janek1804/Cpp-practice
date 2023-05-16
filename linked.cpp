#include <iostream>
#include "linked.h"
template <typename  T>SinglyLinkedList::SinglyLinkedList(T val){
    value = new T;
    *value = val;
    next = nullptr;
}
SinglyLinkedList::~SinglyLinkedList(){
    delete value;
}
template<typename T>  void SinglyLinkedList::insert(T val){

}
int main(){

}