#include<iostream>

using namespace std;

int x = 0;

int main(){
    int x = 10;
    cout << x << endl << "Global : " << ::x << endl;
    return 0;
}