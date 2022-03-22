#include <iostream>
#include <stdlib.h>
using namespace std;

class MyClass{
    int a;
    public:
        MyClass(){
            a = rand();
            cout << "No args constructor" << endl;
        }
        MyClass(int a){
            this->a = rand();
            cout << a << " is the single parameter given to me" << endl;
        }
        MyClass(int a, int b){
            this->a = rand();
            cout << a << " and " << b << " are the two parameters." << endl;
        }
        MyClass(MyClass& test){
            this->a = test.getA();
            cout << "Copied : " << test.getA() << endl;
        }
        int getA(){return a;}
};

int main(void){
    MyClass mc1, mc2(10), mc3(10, 12), mc4(mc1);
}