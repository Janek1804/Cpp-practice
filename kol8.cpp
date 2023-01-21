#include <iostream>

class kolo
{
    protected:
        double* r_;
        double* x_;
        double* y_;
    public:
        
        kolo(){}
        kolo(double r, double x, double y){
            r_ = new double;
            x_ = new double;
            y_ = new double;
            *r_ = r;
            *x_ = x;
            *y_ = y;
        }
        ~kolo(){
            delete r_;
            delete x_;
            delete y_;
        }
        double area(){
            return 3.14*(*r_)*(*r_);
        }
        double circumference(){
            return 2.0*3.14*(*r_);
        }
};

class kula : public kolo{
    protected:
        double* z_;
    public:
        kula(double r, double x, double y, double z){
            r_ = new double;
            x_ = new double;
            y_ = new double;
            z_ = new double;
            *r_ = r;
            *x_ = x;
            *y_ = y;
            *z_ = z;
        }
        ~kula(){
            delete z_;
        }
        double volume(){
            return 4.0/3.0*3.14*(*r_)*(*r_)*(*r_);
        }
        double area(){
            return 4.0*3.14*(*r_)*(*r_);
        }
        double circumference(){
            return -1.0;
        }

};

int main(){
    kolo b(1.0,2.0,3.0);
    kula a(1.0,2.0,3.0,4.0);
    std::cout<<a.volume()<<"\n";
    std::cout<<a.area()<<"\n";
    std::cout<<a.circumference()<<"\n";
    std::cout<<b.area()<<"\n";
    std::cout<<b.circumference()<<"\n";
}