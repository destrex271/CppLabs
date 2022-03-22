#include<iostream>
using namespace std;

int main(void){
    int* a = new int;
    *a = 10;
    cout << *a << " is at address " << a << endl;
    delete  a;
    // cout << *a << " is at address " << a << endl;
}