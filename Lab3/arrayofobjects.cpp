#include<iostream>
using namespace std;

class Test{
    int i;
    public:
        Test(){
            cout << "Created" << endl;
        }
        ~Test(){
            cout << "Deleted" << endl;
        }
        int getI(){return i;}
        void setI(int x){this->i = x;}
};

int main(){
    Test *t = new Test[10];
    cout << "--------------------";
    delete[] t;
    cout << "--------------------";
    Test *wT = new Test;
    cout << "--------------------";
    delete wT;
}