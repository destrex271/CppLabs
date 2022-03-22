#include <iostream>
using namespace std;

class Test{
    int a;
    public:
        Test(int a = 10){this->a = a;cout << "Created" <<endl;}
        ~Test(){cout << "Destroyed!" << endl;}
};

int main(void){
    cout << "Starting...." << endl;
    static Test t;
    cout << "Ending prgrm" << endl;
}