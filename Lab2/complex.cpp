#include<iostream>

using namespace std;

class Complex{
    private:
        double real;
        double img;
    public:
        void setComplex(float real, float img){
            this->real = real;
            this->img = img;
        }
        void displayComplex(){
            cout << real << " + " << img << "i" << endl;
        }
        static Complex sumComplex(Complex a, Complex b){
            Complex d;
            d.real = a.real + b.real;
            d.img = a.img + b.img;
            return d;
        }
};

int main(){
    Complex a;
    Complex b;
    cout << "Enter real and imaginary values of complex numbers" << endl;
    int real, img;
    cin >> real;
    cin >> img;
    a.setComplex(real,img);
    cin >> real;
    cin >> img;
    b.setComplex(real,img);
    Complex::sumComplex(a, b).displayComplex();
    return 0;
}