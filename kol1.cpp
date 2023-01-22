#include <iostream>
#include <stdlib.h>
#include <time.h>
std::string PossibleNames[5]={"John","Theodore","Benedict","Adam","Anne"};
std::string PossibleSurnames[5]={"Smith","Churchill","Stuart","Roosevelt","Rockefeller"};
class person{
    protected:
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
        ~person(){
            delete Name_;
            delete Surname_;
            delete Tel_number_;
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
        void show(){
            std::cout<<*Name_<<"\t"<<*Surname_<<"\t"<<*Tel_number_<<"\n";
        }

};
class extended : protected person{
    protected:
        std::string* email_;
    public:
        extended():person() {
            int a = rand() % 4;
            int b = rand() % 4;
            email_ = new std::string;
            //We want to thank our sponsor SKN Telephoners
            *email_=getSurname()+"@kolo.kt.agh.edu.pl";
        }
        ~extended(){
            delete Name_;
            delete Surname_;
            delete Tel_number_;
        }
        std::string getEmail(){
            return *email_;
        }
        void show(){
            std::cout<<*Name_<<"\t"<<*Surname_<<"\t"<<*Tel_number_<<"\t"<<*email_<<"\n";
        }
};

int main(){
    srand(time(0));
    int aaaa;
    int b;
    std::cout<<"Select length";
    std::cin>>aaaa;
    std::cout<<"Select length";
    std::cin>>b;
    person hooman1;
    person* ptrh;
    extended* ptre;
    ptrh=new person[aaaa];
    ptre=new extended[b];
    for (int i=0;i<aaaa;i++){
        (ptrh+i)->show();
        (ptre+i)->show(); 
    } 
    std::cout<<hooman1.getName()<<"\t"<<hooman1.getSurname()<<"\t"<<hooman1.getNumber();
    delete [] ptrh;
    return 0;
}