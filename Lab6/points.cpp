#include <iostream>
using namespace std;

class Base{
    protected:
        int a;
    public:
        void disp(){
            cout << a << endl;
        }
};

class Derived: public Base{
    public:
        void disp(){
            cout << this -> a;
        }  
};


void main(){
    Base *b = new Base();
    Base *c = new Derived();
    Derived *d = new Derived();
    b->disp();
    c->disp();
    d->disp();
}