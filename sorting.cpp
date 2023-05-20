#include <iostream>
#include <stdlib.h>
template <typename T> void swap(T* a, T* b){
    T temp = *a;
    *a =*b;
    *b = temp;
}
template <typename T> int partition(T* arr, int left, int right){
    T pivot = *(arr+right);
    int i = left - 1;
    for (int j = left; j<right; j++){
        if(*(arr+j) < pivot){
            i++;
            swap((arr+i),(arr+j));
        }
    }
    swap((arr+i+1),(arr+right));
    return i+1;
}
template <typename T> void quicksort(T* arr, int left, int right){
    if (left < right){
        int partitionIndex = partition(arr, left, right);
        quicksort(arr,left,partitionIndex-1);
        quicksort(arr,partitionIndex+1,right);
    }
}

int main(){
    srand(time(NULL));
    double* arr = new double [10];
    for (int i=0; i<10; i++){
        *(arr+i) = (rand() % 100)/12.79;
    }
    quicksort(arr,0,9);
    for (int i=0;i<10;i++){
        std::cout<<*(arr+i)<<"\n";
    }
    return 0;

}