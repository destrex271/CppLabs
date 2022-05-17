#include<iostream>

using namespace std;

class Complex{
    private:
        double real;
        double img;
    public:
        void setComplex(float real = 0, float img = 0){
            this->real = real;
            this->img = img;
        }
        void displayComplex(){
            cout << real << " + " << img << "i" << endl;
        }
        Complex operator +(Complex &c){
            Complex b;
            b.setComplex(this->real + c.real, this->img + c.img);
            return b;
        }
        // static Complex sumComplex(Complex a, Complex b){
        //     Complex d;
        //     d.real = a.real + b.real;
        //     d.img = a.img + b.img;
        //     return d;
        // }
};

int main(){
    Complex a;
    Complex b;
}