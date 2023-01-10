#include <iostream>
class jednostka{
    protected:
        double* HP;
    public:
        jednostka(){}
        jednostka(double &hp){
            HP = new double;
            *HP = hp;
        }
        ~jednostka(){
            delete HP;
        }
        double getHP(){
            return *this->HP;
        }
};
class ERK: jednostka
{
    protected:
        double* tzz;
    public:
    ERK(double hp,double tempo){
        HP = new double;
        tzz = new double;
        *HP = hp;
        *tzz = tempo;
    }
    ~ERK(){
        delete HP;
        delete tzz;
    }
    double getTzz(){
        return *this->tzz;
    }
    void setTzz(double &val){
        *tzz=val;
    }
};

class Kruk: jednostka
{
    protected:
        double* energia;
    public:
        Kruk(double hp,double eng){
            HP = new double;
            energia = new double;
            *HP = hp;
            *energia = eng;
        }
        ~Kruk(){
            delete HP;
            delete energia;
        }
        double getEnergia(){
            return *this->energia;
        }
        
        void przyspiesz(ERK &obj){
            double newTzz = 2*obj.getTzz();
            obj.setTzz(newTzz);
            *energia = 0.5*(*energia);
            
        }
};

int main(){
    ERK er1(20.0,10.0);
    Kruk kru1(20.0,15.0);
    std::cout<<"ERK tzz:"<<er1.getTzz();
    std::cout<<"Kruk eng:"<<kru1.getEnergia();
    kru1.przyspiesz(er1);
    std::cout<<"ERK tzz:"<<er1.getTzz();
    std::cout<<"Kruk eng:"<<kru1.getEnergia();
}

