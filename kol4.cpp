#include <iostream>
#include <stdio.h>
#include <time.h>
class organism{
    protected:
        int* age_;
        int* weight_;
    public:
        organism(){
            age_ = new int;
            weight_ = new int;
            *age_ = rand() % 100 + 1;
            *weight_ = rand() % 100 +1; 
        }
        ~organism(){
            delete age_;
            delete weight_;
        }
        int getAge(){
            return *age_;
        }
        int getWeight(){
            return *weight_;
        }
        bool operator<(organism &right){
            if(*age_<*right.age_){
                return true;
            }
            else{
                return false;
            }
        }
};
class land : protected organism{
    protected:
        int* height_;
    public:
        land():organism(){
            height_ = new int;
            *height_ = rand() % 200;
        }
        ~land(){
            delete weight_;
            delete age_;
            delete height_;
        }
        bool operator<(land &right){
            if(*height_<*right.height_){
                return true;
            }
            else{
                return false;
            }
        }
};

int main(){
    srand(time(0));
    organism *tab= new organism [100];
    for (int i=0;i<100;i++){
        std::cout<<"Wiek: "<<(tab+i)->getAge()<<'\t'<<"Masa: "<<(tab+i)->getWeight()<<'\n';
    }
    std::cout<<(*tab<*(tab+1));
    land l1,l2;
    std::cout<<(l1<l2);
    land *tab2= new land [1000000];
}