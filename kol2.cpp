#include <iostream>
#include <stdlib.h>
#include <time.h>
class complex{
    
        
    public:
        double *real_;
        double *imaginary_;
        complex(){
            srand(time(0));
            real_=new double;
            imaginary_=new double;
            *real_=rand() % 100;
            *imaginary_=rand() % 100;
        }
        ~complex(){
            delete real_;
            delete imaginary_;
        }
        double getReal(){
            return *real_;
        }
        double getImaginary(){
            return *imaginary_;
        }
        void print(){
            std::cout<<*real_<<'+'<<*imaginary_<<'i';
        }
        bool operator< (complex c1){
            if ((*this->real_)*(*this->real_)+(*this->imaginary_)*(*this->imaginary_)<*(c1.real_)*(*c1.real_)+*c1.imaginary_*(*c1.imaginary_)){
                return true;
            }
            else{
                return false;
            }
        }
        bool operator> (complex c1){
            if ((*this->real_)*(*this->real_)+(*this->imaginary_)*(*this->imaginary_)>*(c1.real_)*(*c1.real_)+*c1.imaginary_*(*c1.imaginary_)){
                return true;
            }
            else{
                return false;
            }
        }
       
};

 std::ostream& operator<<(std::ostream& os,const complex &c1){
                os<<*c1.real_<<'+';
                os<<*c1.imaginary_<<'i'<<'\n';
                return os;     
        }
int main(){
    complex c1;
    complex c2;
    bool aaaaa = c1>c2;
    c1.print();
    std::cout<<aaaaa;
    std::cout<<c1;
}