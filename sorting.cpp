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

template<typename T> void merge(T* arr1, T* arr2, int length1, int length2,T* output){
    int i =0;
    int j =0;
    int k =0;
    
    while (i<length1 && j<length2) {
        if (*(arr1+i)>*(arr2+j)){
            *(output+k) = *(arr1+i);
            i++;
        }
        else {
            *(output+k) = *(arr2+j);
            j++;
        }
        k++;
    }
    while (k<length1) {
        *(output+k) = *(arr1+k);
        k++;
    }
    while (k<length2) {
        *(output+k) = *(arr2+k);
        k++;
    }
}
template <typename T> void mergesort(T* arr, int left, int right){
    if (left<right){
        
        int mid = (left+right) / 2;
        T arr1[mid];
        T arr2[right-mid];
        int i = 0;
        while (i<mid){
            arr1[i] = *(arr+i);
            i++;
        }
        while (i<right) {
            arr2[i] = *(arr+i);
            i++;
        }
        mergesort(arr1, left,mid);
        mergesort(arr2, mid+1,right);
        merge(arr1,arr2,mid-left,right-(mid+1),arr);
    }
}
int main(){
    srand(time(NULL));
    double* arr = new double [10];
    for (int i=0; i<10; i++){
        *(arr+i) = (rand() % 100)/12.79;
    }
    mergesort(arr,0,9);
    for (int i=0;i<10;i++){
        std::cout<<*(arr+i)<<"\n";
    }
    return 0;

}