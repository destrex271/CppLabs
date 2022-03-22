#include <iostream>
using namespace std;
class A{
    static int a;
    friend void show();
    friend class B;
    public:
        A(int x = 10){this->a = x;}
};

int A::a = 10;

void show(){
    cout << A::a << endl;
}

class B{
    public:
        static void showB(){
            A::a++;
            cout << A::a << endl;
        }
};

int main(void){
    A a;
    B b;
    show();
    B::showB();
    b.showB();
}