#include<iostream>

using namespace std;

class A{
    int a;
    public:
        static void test(){
            cout << "Test";
        }
};


int main(){
    A::test();
}