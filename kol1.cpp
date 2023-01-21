#include <iostream>
#include <stdlib.h>
#include <time.h>
std::string PossibleNames[5]={"John","Theodore","Benedict","Adam","Anne"};
std::string PossibleSurnames[5]={"Smith","Churchill","Stuart","Roosevelt","Rockefeller"};
class person{
    private:
        std::string* Name_;
        std::string* Surname_;
        int* Tel_number_;
    public:
        person(){
            int a = rand() % 4;
            int b = rand() % 4;
            Name_= new std::string;
            Surname_=new std::string;
            Tel_number_=new int;
            *Name_=PossibleNames[a];
            *Surname_=PossibleSurnames[b];
            *Tel_number_= rand() % 899999999+100000000; 
        }
        std::string getName(){
            return *Name_;
        }
        std::string getSurname(){
            return *Surname_;
        }
        int getNumber(){
            return *Tel_number_;
        }

};

int main(){
    srand(time(0));
    person hooman1;
    std::cout<<hooman1.getName()<<"\t"<<hooman1.getSurname()<<"\t"<<hooman1.getNumber();
    return 0;
}