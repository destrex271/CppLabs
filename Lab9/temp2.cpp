#include <iostream>
using namespace std;

template <typename T> bool comp(T a, T b){
    return a>b;
}

int main(void){
    bool x = comp(10,9);
    if(x == 1){cout << "true";}else cout << "false";
}