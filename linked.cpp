#include <iostream>
#include "linked.h"
SinglyLinkedList::SinglyLinkedList(int val){
    value = new int;
    *value = val;
    next = nullptr;
}
SinglyLinkedList::~SinglyLinkedList(int val){
    delete value;
}
int main(){

}