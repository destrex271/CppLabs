#include <iostream>

using namespace std;


class AbsEg{
    public:
        AbsEg(){
            cout << "Constructor of Eg" << endl;
        }
        virtual void tester(){}
};


class Test: AbsEg{
    public:
        Test(){
            cout << "Test" << endl;
        }
        void tester() {
            cout << "Hello" << endl;
        }
        void abc(){
            cout << "Hello 2" << endl;
        }
};


int main(){
    Test* t = new Test();
    return 0;
}

