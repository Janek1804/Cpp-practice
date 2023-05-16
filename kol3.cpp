#include <iostream>

class box{
    protected:
        int* size_;
    public:
        box(){
            int input;
            std::cout<<"Choose size of a box.\n";
            std::cin>>input;
            size_=new int;
            *size_=input;
        }
        ~box(){
            delete size_;
        }
        int getSize(){
            return *size_;
        }
        bool add(int elem){
            if(elem<=*size_){
                *size_-=elem;
                std::cout<<"Element added."<<*size_<<" space left.\n";
                return 1;
            }
            else{
                std::cout<<"Can't fit into this box.";
                return 0;
            }
        }
};

bool addElem(int elem, box* arr,int len){
    bool result = false;
    for(int i=0;i<len;i++){
        
        if ((arr+i)->add(elem) == true){
            result=true;
        }
    }
    return result;
}

int main(){
    box box1;
    int a = 5;
    box* tab = new box [a];
    box1.add(4);
    std::cout<<addElem(5,tab,5);
}