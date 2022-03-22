#include <iostream>
using namespace std;

inline int cube(int x){
    return x*x*x;
}

int main(void){
    int x = cube(10);
    cout << x << endl;
}