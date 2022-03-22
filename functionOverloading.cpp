#include <iostream>

using namespace std;

// Example of function overloading  

// OOPs concept learned => Polymorphism

namespace overL{
    void testFunc(int a){
        cout << a <<endl;
    }

    void testFunc(int a, int b){
        cout << a << endl << b << endl;
    }


    void testFunc(double a){
        cout << a << endl;
    }
}

int main(){
    overL::testFunc(10);
    overL::testFunc(100,100);
    overL::testFunc(12.0);
    return  0;
}