#include <iostream>
using namespace std;

class Test{
    int a;
    public:
        // Test(){
        //     a = 10;
        // }
        Test(int a = 10){
            this->a = a;
            cout << "In defualt constructor" << endl;
        }
        ~Test(){
            cout << "In Destructor" << endl;
        }
};

int main(){
    Test t;
}