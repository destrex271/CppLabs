#include <iostream>
using namespace std;

class Try{
    public:
        Try(){
            cout << "In const" << endl;
        }
        ~Try(){
            cout << "In Destructor" << endl;
        }
        void func(){
            cout << "In func" << endl;  
        }
};

void m1(){
    Try* t1 = new Try();
    t1->func();
    Try* t2 = new Try();
    t2->func();
    delete t1;
    delete t2;
}

void m2(){
    Try* t = new Try[3];
    for(int i = 0 ;i < 3; i++){
        t[i].func();
    }
    delete[] t;
}

int main(){
    m1();
    m2();
    return 0;
}