#include <iostream>
using namespace std;

class Test{
    int x;
    public:
        Test(int x = 10){
            this->x = x;
        }
        void disp(){
            cout << this->x << endl;
        }
};

int main(void){
    Test t;
    Test* ptrT;
    ptrT = &t;
    t.disp();
    ptrT -> disp();
}