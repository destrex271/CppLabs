#include <iostream>
using namespace std;

class A{
    protected:
        int a;
    public:
        A(int x = 10) : a(x){}
        void show(){
            cout << "OK!" << endl;
        }
};

class B : public A{
    public:
        B(){this->a = 10;}
        void show(){
            cout << "OK! " << this->a << endl;
        }
};

int main(void){
    A a;
    B b;
    a.show();
    b.show();
}