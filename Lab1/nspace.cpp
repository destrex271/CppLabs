#include<iostream>

using namespace std;

namespace a{
    int a = 10;
}

int main(){
    int a = 11;
    cout << a << endl << "in nmspcae " << a::a;
    return 0;
}