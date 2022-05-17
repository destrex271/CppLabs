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

int main(){
    Base b;
    Derived d;
    b.disp();
    d.disp();
}
